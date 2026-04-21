# Bomberman Online Handler Inventory

This file is a compact reference for the currently recovered Bomberman Online
Dreamcast client handlers. It is not a claim that every binary handler is fully
recovered yet. It is the best confirmed map of handler behavior, emitted
messages, and server-facing response logic recovered from the current Ghidra
passes.

Use this file together with:

- `D:\kageserver\docs\bomberman_revival_plan.md`
- `D:\kageserver\docs\generated\bomberman_handler_map.tsv`
- `D:\kageserver\docs\generated\bomberman_flow_strings.tsv`
- `D:\kageserver\docs\ghidra_decompile\`

## Confidence Legend

- `confirmed`: direct decompilation of the handler body supports the statement
- `strong inference`: nearby string tables and callback family structure support
  the statement, but the exact field meanings are still partially inferred
- `open`: likely true, but needs more decompilation or live validation

## 1. Login, Lobby, and Bootstrap

### Explicit login/bootstrap messages

- `Could not found Server Address.`
- `Failed to Logon to game server.`
- `Can't get Kage Server IP Addres from DNS.`
- `Kicked out by Room and Disconnected.`
- `Disconnected by Server Request.`

These strings confirm the client has separate failure surfaces for DNS/bootstrap,
server login, room kick, and server-requested disconnect.

### Lobby query state wrappers

- `0x8C0E1B68` `confirmed`
  - local state `0`: issue `QueryLobbyRequest`
  - state `0x11`: query complete
  - state `0x12`: query failure
  - state `0x13`: no lobbies found

### Lobby object lifecycle

- `0x8C0E9084` `confirmed`
  - success message: `Lobby %d %s Created.`
- `0x8C0E90EC` `confirmed`
  - success message: `Lobby %d Deleted.`
- `0x8C0E8FA0` `confirmed`
  - tagged lobby attribute updates for `GAME`, `NAME`, `USER`
- `0x8C0EABA8` `confirmed`
  - lobby attribute follow-up callback by object id and tag
- `0x8C0EAC90` `confirmed`
  - changed-user-property callback for lobby state
- `0x8C0EAE3C` `confirmed`
  - tag refresh shim over `GAME`, `NAME`, and `USER`

### Lobby message cluster

The binary has explicit lobby status strings for:

- create requested/completed/failed
- join requested/completed/failed
- leave requested/completed/failed
- query lobbies requested/completed/failed
- query lobby attributes requested/completed/failed
- query users in lobby requested/completed/failed

That means the lobby path is heavily stateful and callback-driven rather than
one monolithic "refresh lobby" operation.

## 2. Room List, Room Create, Room Join

### Room list object lifecycle

- `0x8C0E6746` `confirmed`
  - allocates `0x28` bytes for a room entry
  - copies callback payload fields at `+0x10`, `+0x14`, `+0x18`, `+0x1c`, `+0x20`
  - appends the room object into a linked list
  - increments room count
- `0x8C0E680E` `confirmed`
  - removes the room object by id
  - decrements room count
- `0x8C0E80F0` `confirmed`
  - tagged room attribute updates
  - explicit room-name handling
  - explicit room open/locked attribute handling

### Live room-object follow-up callbacks

- `0x8C0E6896` `confirmed`
  - room callback helper that copies payload fields at `+0x10`, `+0x14`, `+0x18`
  - sits in the room callback table beside room add/remove handlers
- `0x8C0E6900` `confirmed`
  - tiny sibling callback that forwards the room id/object id to the active room UI object
- `0x8C0E6926` `confirmed`
  - room attribute follow-up for an existing room object
  - updates room fields by tag
  - one tag updates room name
  - one tag updates open/locked/playing attributes
  - one tag updates a separate integer field at `+0x18`, consistent with room user count

Implication:

- live room membership changes are not only "room-user add" events
- the client also has a distinct room-object attribute callback path that tracks
  room count/state separately from roster entries

### Room query state wrapper

- `0x8C0E1C42` `confirmed`
  - `0x11`: complete
  - `0x12`: failure
  - `0x13`: no rooms found
  - `2` and `8`: route to local state `3`
  - `5`: route to local state `0`

This confirms room-query status handling is not interchangeable with lobby-query
status handling.

### CKageApp room flow anchor

- `0x8C0962A4` `confirmed`
  - state-driven handler
  - state `9` logs `Request QueryUserInRoomRequest()`
  - dispatches a room-user query as part of room enter/create follow-up

Implication:

- room-user replies are part of the normal room transition
- room create/join stability depends on room-user callback compatibility, not
  only create-room success

## 3. Room User Population, Update, and Typed Dispatch

### Direct room-user callbacks

- `0x8C0E9128` `confirmed`
  - success message: `UserID:%d NAME:%s`
  - consumes payload fields at `+0x10`, `+0x14`, `+0x18`
- `0x8C0EAD7E` `confirmed`
  - follow-up room-user add/log callback
  - prepares a name buffer and logs `UserID:%d NAME:%s`

### Shared room-user object helpers

- `0x8C0EAF7C` `confirmed`
  - allocate/init `0x4c`-byte object
  - zero key fields
- `0x8C0EAFC4` `confirmed`
  - reset object
  - optionally free/teardown depending on flags
- `0x8C0EB0D4` `confirmed`
  - reads byte tag at offset `+0x12`
  - indexes a handler table
  - dispatches to a tag-specific worker

Implication:

- room-user and related callback payloads are likely type-dispatched
- Kage should avoid semantically mixing different callback record types inside
  one response stream

### Change-user-status callback wrappers

- `0x8C0E0180` `confirmed`
  - logs `Completed ChangeUserStatusCallback.`
  - dispatches through the current UI/log callback object
- `0x8C0E019A` `confirmed`
  - logs `Fail ChangeUserStatusCallback Request.`
  - dispatches through the same callback object family

Implication:

- `REQ_CHG_USER_STATUS` is a real first-class callback path in the client, not a
  dead or cosmetic string
- but the recovered wrappers are only success/failure notification shims; they
  do not yet prove the exact ready-state bit pattern Kage should send

### Roster-row UI object setters

- `0x8C0E1E14` `confirmed`
  - writes a small state field at object offset `+0x58`
  - the SH-4 listing shows explicit special-casing for incoming values `1`,
    `2`, and `3`
  - exact semantic labels for those small integers are still open
- `0x8C0E1E54` `confirmed`
  - copies or clears two separate `0x3c`-byte text buffers at object offsets
    `+0x9c` and `+0xd8`
  - empty input clears both buffers
  - non-empty input copies the supplied strings into both slots

Implication:

- a visible room-member row is backed by a richer row object than a single name
  string
- a blank row can happen when the slot object exists but its text-buffer setter
  path never receives the expected non-empty input
- the room-user/status problem now looks even more like an object-materialization
  gap than a generic room-snapshot bug

### Likely shared leave/update family

- `0x8C0EAE94` `strong inference`
  - small callback shim in the same family as the room-user and lobby-follow-up
    handlers
  - nearby string table includes:
    - `UserID:%d NAME:%s`
    - `UserID:%d Leaved.`
    - `Lobby %d Name to %s.`
    - `Lobby %d Join %d User.`
    - `Lobby %d have %d Rooms.`

Implication:

- user-leave behavior is probably handled by the same tagged callback family
  rather than a clean separate standalone function
- the current full range dump for `0x8C0EABA8` through `0x8C0EB100` yielded this
  room-user family:
  - `0x8C0EABA8`
  - `0x8C0EAC90`
  - `0x8C0EAD7E`
  - `0x8C0EAE3C`
  - `0x8C0EAE5C`
  - `0x8C0EAE94`
  - `0x8C0EAF7C`
  - `0x8C0EAFC4`
  - `0x8C0EB0D4`

### In-room roster refresh / toast path

- `0x8C096928` `confirmed`
  - active game-room UI/state handler
  - consumes queued room-user events where event type bytes `0..4` drive
    separate update/remove paths
  - emits the toast `The number of players in this room has changed.` when a
    room-object-side flag is set

Implication:

- the visible `Room Members` list and the room-count toast are related but not
  identical paths
- a server can update the room-count path without fully materializing a new room
  member in the roster
- the in-room UI keeps an 8-slot table with:
  - a per-slot state field at `slot * 0x14 + 0xc`
  - a separate name buffer at `slot * 0x10 + ...`
- a blank room-member row is therefore consistent with "slot exists but name
  buffer not populated"
- dim/bright room-member presentation and Start Battle visibility are therefore
  likely tied to slot-state updates in addition to rule acceptance
- the same handler counts:
  - occupied slot bits into `local_2c`
  - non-empty rendered names into `local_30`
  and only enables the room-wide start-toggle path when `local_30 > 1` and
  `local_30 == local_2c`

### In-room slot/status UI methods

- `0x8C0F4F38` `confirmed`
  - stores a per-slot integer flag in a table owned by the active room UI object
  - notifies a child object at `+0x54` when any of the stored slot-flag pairs
    are non-zero
  - is called by `0x8C096928` after per-slot state handling
- `0x8C0F5A1A` `confirmed`
  - forwards a boolean directly to the same child object at `+0x54`
  - is the concrete method reached by the final room-wide start-enable check in
    `0x8C096928`

Implication:

- the owner's grey `Start Battle` button can persist even when Kage has
  `accepted_rules=2` and `can_start=1` if the client-side slot/name object state
  is still incomplete
- the joiner's blank `FARKUS` row and the owner's disabled `Start Battle` button
  are now strongly linked by the same in-room slot/UI contract

### Ping / occupied-slot mask correlation

- `0x8C096928` `confirmed`
  - final Start Battle enable gate counts occupied bits from the state field at
    offset `+0x00e4`
  - the gate requires rendered member-name count to match that occupied-bit
    count
- stable nonzero dump pairs `confirmed`
  - each Dreamcast was sending a local ping bitmask for its own slot only
  - `.246` sent `01`
  - `.245` sent `02`
  - Kage had been echoing those masks back unchanged
- server implication:
  - for two one-slot Dreamcasts, each client needs the aggregate room occupancy
    mask `03`, not just its own local bit
  - Kage now computes the aggregate mask from room slots and uses that in the
    Bomberman ping response
  - this targets the `local_30 == local_2c` portion of the `0x8C096928` start
    gate without changing join, `udp8`, `udpA`, rule, or lock packets

Latest validation:

- the aggregate ping patch fired in hardware logs:
  - `FARKUS2: ping slot mask in=02 out=03`
  - `FARKUS: ping slot mask in=01 out=03`
- owner `Start Battle` still remained grey after both players accepted rules and
  the room lock self-sync fired
- therefore the remaining disabled-button input is not server-side
  `accepted_rules`, room lock propagation, rendered-name materialization, or the
  aggregate occupied-slot ping echo alone

### Room-master / keyholder UI sync

- `0x8C099CC4` `confirmed`
  - logs `IN> ReciveNewKeyHolderInfo()`
  - reads packet field `+4` as the new keyholder user id and stores it at
    session offset `+0x2448`
  - reads packet field `+8` as the keyholder/player position and stores it at
    session offset `+0x244c`
  - if the active room UI object at `+0x02b4` exists, compares the received
    keyholder id against the local self id at `+0x2450`
  - calls `0x8C0F4E64(true)` only on the local keyholder/owner client; non-owners
    receive `false`
- `0x8C0F4E64` `confirmed`
  - toggles bit `0x4` in a room UI object word at offset `+0x00a8`
  - this is a concrete owner/keyholder UI flag separate from the final
    `0x8C096928` start-enable check
- server implication:
  - Kage already had a Bomberman `udp 0x0e` keyholder packet but only sent it
    when the room owner changed after a leave/timeout
  - current live source now sends that same packet after a joiner's `udp8`
    room-init RUDP ACK once all human occupants are fully joined
  - expected validation log:
    - `keyholder sync (room_join_complete) -> FARKUS [1001] owner=FARKUS [1001] pos=0`
    - `keyholder sync (room_join_complete) -> FARKUS2 [1002] owner=FARKUS [1001] pos=0`

### In-room queued-update helpers

- `0x8C0E2D62` `confirmed`
  - pops queued records from a ring-buffer-like structure at object offsets
    `+0x40`, `+0x44`, and `+0x48`
  - returns a compact record whose byte at offset `+4` is the event type used by
    `0x8C096928`
- `0x8C0F5370` `strong inference`
  - is the concrete helper used by `0x8C096928` for queued event type `4`
  - copies a fixed-width `10`-byte field from `payload + 0x0b`, trims trailing
    spaces, and treats `param_3 == -1` as fallback slot `0x10`
  - pushes the formatted row payload through the room UI widget at `+0x3c`
  - also flips a local flag at `+0x6c` and marks the parent UI object dirty with
    bit `0x40`
- `0x8C0F57FC` `confirmed`
  - switches the room UI widget at `+0x3c` between two states and also notifies
    the child presenter at `+0x54`
- `0x8C0F58D4`, `0x8C0F58EA`, `0x8C0F58F8`, `0x8C0F58C6`, `0x8C0F583C`,
  and `0x8C0F5A38` `confirmed`
  - are thin room UI wrappers around the same `+0x3c`, `+0x54`, and `+0x58`
    presenter objects used by the in-room roster/start screen

Implication:

- the active room screen is driven by a queued-update layer, not just direct room
  snapshot rendering
- the missing `FARKUS` row is therefore likely tied to one missing or malformed
  queued room-user update class, not just a missing one-shot snapshot field
- because event type `4` falls back to slot `0x10` when the caller passes `-1`,
  queued occupant-row updates are likely sensitive to slot-table population order

### Room slot-table builder

- `0x8C0991E4` `confirmed`
  - writes directly into the `0x22ec` slot table used by `0x8C096928`
  - stores per-slot records of `0x14` bytes and sets slot states `1`, `2`, and `3`
  - assigns the local player id into the slot table first, then walks the
    remaining packet entries and marks additional occupied slots
  - after building the slot table, iterates all `8` slots and resolves room-user
    data to populate row-facing state

Implication:

- visible room-member rows are not built from room-user snapshots alone
- the client expects the slot table to exist before the room-row population pass
- if Kage sends pre-existing occupant row events before the joiner's slot table is
  established, the client can end up with:
  - a blank room-member row on the joiner
  - a grey `Start Battle` button on the owner despite server-side `can_start=1`

## 4. Pre-Match Rule / Ready / Start

### Named rule/start strings

- `The room master has set new rules.`
- `CSetGameRule`
- `CSetupRule`
- `CCheckRule`
- `A game was not able to be started.`

These confirm a distinct rule/setup/start phase between stable room entry and
match entry.

### Start-failure handler

- `0x8C098E50` `confirmed`
  - shows `A game was not able to be started.`
  - writes local state `8`

### Compact pre-match packet emitter

- `0x8C098DDC` `confirmed` with `strong inference` on exact fields
  - builds a 4-byte packet
  - zeroes the packet buffer
  - chooses opcode `0x0b` or `0x0c`
  - derives a boolean from current counters/state comparisons
  - appends a 16-bit value
  - sends the 4-byte packet

Likely packet shape:

- byte 0: opcode (`0x0b` or `0x0c`)
- byte 1: ready/sync boolean
- byte 2-3: 16-bit counter or sequence/state id

### Additional pre-match subtype 9 emitter

- `0x8C0981C8` `confirmed`
  - zeroes a 13-byte packet buffer
  - writes packet subtype `9`
  - copies a 9-byte payload from local pre-match state
  - sends the packet only when local counters/state comparisons succeed

Implication:

- Bomberman's pre-match flow includes a real `REQ_GAME_DATA` subtype `9`
  message with a 9-byte payload
- older Kage assumptions that subtype `9` is unused are no longer reliable

### Pre-match transition/cleanup gate

- `0x8C098E8C` `confirmed`
  - only advances when counters/state values align
  - tears down UI/pre-match objects
  - clears the current pre-match object
  - advances local state to `0x0b`

Implication:

- Bomberman's pre-match transition is gated by internal counters
- a server that only accepts `START` without satisfying the compact ready/sync
  handshake is likely to trip the failed-start path
- the current full range dump for `0x8C098DDC` through `0x8C099080` only yielded
  three real function entries so far:
  - `0x8C098DDC`
  - `0x8C098E50`
  - `0x8C098E8C`

## 5. In-Game, Settle, Result, and Disconnect

### Known in-game/result strings

- `All Battle End. Send Signal CLI_SET_SETTLED.`
- `--- Svr Settled Recv Dead Bits %ld`
- `---- Hyper Rule Update and Game End! ----`
- `---- Normal Rule Update History and Game End! ----`

These strings confirm:

- the client has an explicit settle/end signal
- there is a dead-bit or post-battle settle path
- end-of-game handling can branch between at least two rule/history update cases

### Typed battle/update object buckets

The earlier pass around `0x8C0A8D76` through `0x8C0A8F78` showed a typed object
update system with tag families like `2`, `4`, `0x10`, and `0x20`.

Implication:

- in-game state replication probably also uses typed object families instead of a
  single flat state blob

## 6. Response-Logic Takeaways for Kage

### Already strong

- lobby and room query codes are explicit and distinct
- room-user population is a first-class compatibility requirement
- room/lobby attribute changes are tag-based, not purely positional
- rule/start has a compact pre-match handshake plus a gated cleanup transition

### Still open

- exact semantic meaning of the 16-bit field in the 4-byte pre-match packet
- exact split between room-user leave, rename, and occupancy-change callbacks
- the full chain from `Setup rule` confirmation to successful battle start
- complete battle-time message and result handler recovery

## 7. Best Next Reverse Steps

1. Decode the compact `0x0b` / `0x0c` packet fields more precisely by following
   the lower-level emit helpers and their callers.
2. Continue the shared room-user leave/update callback family rather than
   expecting one isolated "user left" function.
3. Map the post-`0x0b` state path in the pre-match cluster until the client's
   successful transition into match-start is explicit.

### Additional pre-match subtype 4 emitter

- `0x8C098894` `confirmed`
  - zeroes an 8-byte packet buffer
  - writes packet subtype `4`
  - writes a boolean derived from local counters/state
  - appends a 32-bit parameter
  - sends the packet

Implication:

- Bomberman also has a real `REQ_GAME_DATA` subtype `4` family in the pre-match
  transition chain
- `0x8C096928` event `0x18` is the currently strongest in-client branch tied to
  that subtype `4` emission

### 2026-04-20 owner-side room-lock self-sync

- latest live failure still reaches Kage `ready_to_start` with both real players
  accepted, but the owner does not emit the start command because `Start Battle`
  remains grey
- matching prior outbound dumps show a room-lock asymmetry:
  - non-requesting player receives live `REQ_CHG_ROOM_ATTR STAT=0x40000001`
  - requesting owner receives only `RSP_OK` carrying the same tag/value
- because `0x8C096928` reads the local room object's locked bit before calling
  the start-enable UI setter, the current live server now appends an explicit
  owner-side `REQ_CHG_ROOM_ATTR STAT` self-sync after the OK for Bomberman only
- next validation should check whether the log prints:
  - `REQ_CHG_ROOM_ATTR STAT=40000001`
  - `Bomberman self room attr sync STAT=40000001`
  - and whether `START BATTLE!` appears after the owner tries the menu

### 2026-04-20 rule blob receive handler direction split

- `pass93_room_start_wide_listing\8c090000_8c09d000.lst` around
  `0x8C093838` maps the incoming Bomberman `REQ_CHAT` command dispatch.
- Important command split:
  - command `0x07` branches to `0x8C099ACC`, which is leave/cleanup-like and
    clears local room state when its conditions match
  - command `0x0B` branches to `0x8C093DC6`, copies exactly 9 bytes from packet
    payload `+4` into client state `+0x245c`, then writes `1` to `+0x00e0`
  - command `0x0C` branches to `0x8C0999B4`, which parses a larger structured
    player/state map rather than the 4-byte compact client packet
- This proves client-to-server compact `0x0b` / `0x0c` packets are not valid
  peer relays in the same shape.
- `0x8C096928` requires `+0x00e0 != 0` before it calls the concrete Start
  Battle enable setter, so server-side current-rule sync must use incoming
  command `0x0B` with a 9-byte rules payload.
- Latest Kage translation:
  - owner `REQ_GAME_DATA` subtype `7` still stores the submitted 9-byte rules
  - Kage now broadcasts server-to-client Bomberman `udp 0x0b` as
    `command + word + 9 rule bytes`
  - Kage no longer relays compact client-origin `0x0b` / `0x0c` packets as
    peer `REQ_CHAT` payloads

### 2026-04-20 occupied slot mask receive handler

- Same dispatch listing maps incoming Bomberman command `0x11` to
  `0x8C093D5C`.
- The handler calls the endian conversion helper on packet payload `+4`, then
  stores that 32-bit result at client state offset `+0x00e4`.
- `0x8C096928` counts occupied bits from `+0x00e4` and only enables Start Battle
  when that count equals the rendered member-name count and is greater than one.
- The earlier ping/liveness handler for command `0x1c` does not write
  `+0x00e4`; it writes the table at `+0x270 + slot * 8`.
- Latest Kage translation:
  - send server-to-client Bomberman `udp 0x11`
  - payload is `command + word + 32-bit occupied mask`
  - for the current two-human one-slot test, the expected mask is `03`
  - send after room join completion, rule configuration, and rule acceptance

### 2026-04-20 start transition receive handler

- Latest live evidence after the occupied-slot mask patch:
  - `Start Battle` became selectable on the owner console.
  - Kage logged the owner `START BATTLE!` request.
  - immediately after that, the guest stopped ACKing a server packet and timed
    out, matching the user-visible freeze/no-transition symptom.
- `pass93_room_start_wide_listing\8c090000_8c09d000.lst` proves the old Kage
  start relay was using the wrong server-to-client command family:
  - server command `0x0a` dispatches through `0x8C093E22` into `0x8C099524`
  - `0x8C099524` is the roster/slot-table update builder, not battle start
  - relaying the client-origin start request `0x0a` as server `0x0a` therefore
    injects malformed roster data at the exact moment the room should leave the
    menu
- The same dispatch listing maps server command `0x13` to `0x8C093BBC`.
- `0x8C093BBC`:
  - tears down room/pre-match UI state
  - sets the next room/game state to `0x0b`
  - calls `0x8C09A3BC`, which is tied to the `PlayGame` setup path
  - endian-converts and stores packet payload `+4` as a start token

Latest Kage translation:

- keep the client-origin `REQ_GAME_DATA` subtype `0x0a` as the owner Start
  Battle request
- ACK the owner request after validating `canStartBattle()` and ownership
- stop relaying that request as server command `0x0a`
- broadcast server-to-client Bomberman command `0x13` to all room players with:
  - command `0x13`
  - size `4`
  - the owner request word preserved
  - a 32-bit start token currently set to the Kage room id
- if both clients ACK command `0x13` but still do not transition, the next
  evidence-backed target is command `0x14` / Game Time Info rather than another
  room-roster packet change

### 2026-04-20 post-transition game-data relay

- Latest live hardware evidence after the `0x13` start-transition patch:
  - both clients ACKed the server start-transition packet
  - both clients left the room UI and reached the game board
  - both clients then froze before sprites/board actors populated
- Fresh Kage logs showed the new boundary precisely:
  - `start relay acked by FARKUS2`
  - `all human players acked start relay`
  - repeated client `REQ_GAME_DATA` subtype `0x04`
  - then unhandled client `REQ_GAME_DATA` commands:
    - `0x0d` with zero-size payload marker
    - `0x05` with 4-byte tick/state payload
    - `0x1a` with 128-byte map-info blocks
    - `0x1b` with 128-byte map-info blocks
    - `0x0e` with zero-size payload marker after the map stream
- Kage had been falling through to the generic unhandled `REQ_GAME_DATA` path.
  That produced generic ACKs but did not forward the game/map payloads to the
  other Dreamcast.

Latest Kage translation:

- handle Bomberman client `REQ_GAME_DATA` commands `0x05`, `0x0d`, `0x0e`,
  `0x1a`, and `0x1b`
- ACK the sender with `REQ_NOP`
- relay the exact payload bytes to the other room players as `REQ_GAME_DATA`
  with the Kage relay flag and source player id preserved
- do not translate these packets into server-side `REQ_CHAT` commands:
  - the recovered server-command dispatcher around `0x8C093838` only covers up
    to command `0x19`
  - live map blocks are command `0x1a` / `0x1b`, so preserving
    `REQ_GAME_DATA` shape is safer than forcing them through the room-command
    dispatcher

Next validation:

- after board transition, expected logs should show `game data relay cmd=0d`,
  `cmd=05`, `cmd=1a`, `cmd=1b`, and `cmd=0e`
- those commands should no longer appear as `Unhandled udp 11 command`
- if sprites still do not populate after the relay path is live, the next
  evidence-backed target remains server command `0x14` / Game Time Info

### 2026-04-20 post-start Game Time Info handler

- `0x8C093B70` `confirmed`
  - server-to-client Bomberman command `0x14` dispatch branch
  - calls `0x8C099E92` with the current session object and packet buffer
  - then refreshes the session object's `+0x44` state through the common state
    helper
- `0x8C099E92` `confirmed`
  - logs `Game Time Info. Now CommonFrame= ...`
  - reads three endian-converted 32-bit values from packet payload offsets:
    - `+4`: start frame
    - `+8`: end frame
    - `+0x0c`: current/common frame
  - sets a game-time-received flag at the session object
  - forwards the start/end frame pair to a timing helper
  - stores the common frame in the active play/game state

Implication:

- If the current client `REQ_GAME_DATA` relay patch still leaves both Dreamcasts
  frozen on the board, the next narrow server translation should be command
  `0x14`, not another room/join/rule packet.
- The payload size for command `0x14` is therefore `12` bytes after the command
  word, with three 32-bit frame values.
- The exact frame values still need live selection, but the field layout is now
  binary-backed.

Latest Kage translation:

- the fresh `20_18-01-20_BM_test` run proved the `REQ_GAME_DATA` relay patch
  fired for `0x0d`, `0x05`, `0x1a`, `0x1b`, and `0x0e`
- the outbound dump showed no server-side `0x14` Game Time Info packet before
  both consoles timed out
- Kage now broadcasts server-to-client Bomberman command `0x14` after all human
  players ACK the `0x13` start transition
- payload:
  - command `0x14`
  - size `12`
  - word `0`
  - start frame `0`
  - end frame `10800`
  - common frame `0`
- expected next-test log lines:
  - `game time sync (start_relay_acked) -> FARKUS ... start=0 end=10800 common=0`
  - `game time sync (start_relay_acked) -> FARKUS2 ... start=0 end=10800 common=0`

2026-04-21 correction from live hardware:

- fresh `21_06-49-50_BM_t` / `_out` proved immediate `0x14` timing is wrong:
  - both consoles ACKed server command `0x13`
  - Kage sent server command `0x14` as `REQ_CHAT full=280c`
  - both consoles ACKed `0x14`
  - the later `0x1a` / `0x1b` map-block phase no longer appeared
  - both consoles timed out after only `0x0d`, repeated `0x04`, and repeated
    `0x05`
- this means command `0x14` is a valid client receiver but should not be sent
  immediately after the room-to-board transition ACK.
- current Kage translation:
  - remove the immediate `0x14` broadcast from the `0x13` ACK path
  - track each real player's post-map `REQ_GAME_DATA` command `0x0e`
  - relay each `0x0e` to the peer before advancing the room gate
  - broadcast `0x14` only after all real room players have emitted `0x0e`
  - retain the current frame values for the next validation:
    - start `0`
    - end `10800`
    - common `0`
- expected next-test log lines:
  - `post-map marker from FARKUS ... (1/2)`
  - `post-map marker from FARKUS2 ... (2/2)`
  - `game time sync (post_map_exchange) -> ... start=0 end=10800 common=0`

2026-04-21 board-sprites reached / live-state relay:

- fresh `21_08-17-03_BM_t` / `_out` proved the post-map `0x14` gate advanced
  farther:
  - map blocks `0x1a` / `0x1b` returned
  - both clients sent post-map marker `0x0e`
  - Kage sent `game time sync (post_map_exchange)`
  - the game board loaded and two player sprites appeared
- the next server failure was no longer room/start/map timing:
  - Kage logged repeated unhandled `REQ_GAME_DATA` commands:
    - `0x01` / `full=02c8` / size `200`
    - `0x02` / `full=04a4` / size `164`
    - `0x03` / `full=063c` / size `60`
  - these packets appeared symmetrically from both Dreamcasts after sprites
    spawned
  - existing decomp around `0x8C0984C0` / `0x8C09840C` sits in the in-game
    packet construction area and includes the `0x02c8` live-state block source
- current Kage translation:
  - `REQ_GAME_DATA` commands `0x01`, `0x02`, and `0x03` now use the same
    exact-payload relay path as the proven `0x05`, `0x0d`, `0x0e`, `0x1a`,
    and `0x1b` families
  - relay preserves source player id and RUDP/unreliable shape
  - no login, room, rule, start-transition, map-block, or Game Time ordering
    logic changed

### 2026-04-20 battle settle/dead-bit receive handlers

- `0x8C093A74` `confirmed`
  - server-to-client command `0x16`
  - reads a 32-bit dead-bit value from packet payload `+4`
  - logs `--- Svr Settled Recv Dead Bits %ld`
  - stores that value into the play/game state before refreshing `+0x44`
- `0x8C09392E` / `0x8C0939A0` `confirmed`
  - server-to-client command `0x19`
  - walks the 8-slot table and branches on slot states `1`, `2`, and `3`
  - reads a 32-bit dead/completed bit value from payload `+4` when the local
    state allows it
  - logs `--- Svr Completed ed Recv Dead Bits %ld`
  - stores that value into the play/game state before refreshing `+0x44`

Implication:

- Commands `0x16` and `0x19` are later battle-settle/completion paths, not the
  immediate board-sprite population blocker.
- They should be kept in the roadmap for win/lose/return-to-room, but should not
  be implemented ahead of `0x14` unless live logs reach those commands.

### 2026-04-21 in-game liveness table / delayed disconnect

- fresh `21_08-34-52_BM_t` / `_out` proved the `0x01` / `0x02` / `0x03`
  live-state relay patch works as intended:
  - room/rule/start still completed
  - map commands `0x0d`, `0x05`, `0x1a`, `0x1b`, and `0x0e` were relayed
  - Kage sent `game time sync (post_map_exchange)` after both post-map markers
  - Kage then relayed repeated live-state `REQ_GAME_DATA` commands `0x01`,
    `0x02`, and `0x03`
  - no fresh unhandled `0x01` / `0x02` / `0x03` lines appeared
- the remaining symptom changed shape:
  - the board loaded with sprites
  - the line-disconnected popup appeared a few seconds later than before
  - the local game timer continued in the background
  - inbound traffic then stopped and both players timed out server-side
- binary evidence separates live-state buffers from liveness:
  - `0x8C093FDC` dispatches `cmd 0x01`, `0x02`, and `0x03` into receive
    buffers at the active game object offsets `+0x88`, `+0x8c`, and `+0x90`
  - the same dispatcher has a distinct `cmd 0x1c` branch
  - that branch reads a 32-bit value from payload `+4`, a slot mask byte from
    payload `+8`, and writes the low byte of the value into
    `global + 0x270 + slot * 8` while zeroing the slot timer/counter at `+4`
- outbound dump evidence:
  - pre-start `REQ_CHAT` `cmd 0x1c` ping replies existed before battle start
  - after server command `0x13` and post-map `0x14`, no further outbound
    `cmd 0x1c` packets were present before the clients stopped sending
- current Kage translation:
  - after all real players send post-map `REQ_GAME_DATA 0x0e`, Kage now sends
    the deferred `0x14` Game Time Info, then an in-game `REQ_CHAT cmd 0x1c`
    liveness sync to each room player
  - while `syncState == InGame`, Kage repeats that same `0x1c` liveness sync
    every second
  - payload matches the already accepted ping response shape:
    - command `0x1c`, size `4`
    - word `0`
    - value `0x10000000`
    - aggregate occupied slot mask, currently expected `03`
  - no login, room join, rule, start, map-transfer, game-time ordering, or
    `0x01` / `0x02` / `0x03` relay code was otherwise changed

### 2026-04-21 live object echo regression and end-state timer

- fresh `21_09-17-33_BM_t` / `_out` changed the failure mode again:
  - in-game liveness held; no immediate line-disconnect popup
  - movement continued
  - A press created a temporary yellow tile mark but no committed bomb
  - countdown reached zero without settle/results
- dump evidence:
  - live `REQ_GAME_DATA` `0x01`, `0x02`, and `0x03` continued from both
    clients for the duration of the match
  - Kage relayed those live-state packets only to peers because the generic room
    relay excludes the sender
  - outbound dump contained no `0x16`, `0x19`, or `0x15` after countdown expiry
- binary evidence:
  - `0x8C0DDA44` receives `0x01` and parses live-state player/record data
  - `0x8C0DDBE4` receives `0x02`, including 28 compact 4-byte records decoded
    by `0x8C0DD698`; this is currently the best bomb/object-state candidate
  - `0x8C0DDD64` receives `0x03`
  - `0x8C093A74` receives `0x16` settled dead bits
  - `0x8C09392E` receives `0x19` completed/dead bits
  - `0x8C093B10` receives `0x15` and advances the battle end state machine
- follow-up regression:
  - `21_10-04-34_BM_t` / `_out` proved that manually echoing live-state `0x01`
    / `0x02` / `0x03` to the originating client makes both clients stop sending
    live traffic shortly after board start
  - peer-only relay is the last proven-good live-state shape
- current Kage translation:
  - live-state `0x01` / `0x02` / `0x03` packets are relayed only to peer room
    players, preserving source id with `FLAG_RELAY`
  - after the post-map `0x14` Game Time Info gate, Kage arms a 10800-frame
    match-end timer
  - on timer expiry, Kage sends ordered reliable server commands `0x16`,
    `0x19`, and `0x15` to each player
  - decoded `0x02` object records were constant during the long A-press test;
    bomb placement must be recovered from the input/request path, not from a
    client-sent committed object record
