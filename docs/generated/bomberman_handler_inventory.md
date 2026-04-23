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
  - on timer expiry, the first implementation bundled reliable server commands
    `0x16`, `0x19`, and `0x15` into one packet
  - decoded `0x02` object records were constant during the long A-press test;
    bomb placement must be recovered from the input/request path, not from a
    client-sent committed object record
  - Kage briefly suppressed relay of default/empty `0x02` object tables so an
    idle peer would not overwrite a local bomb attempt with default object state

### 2026-04-21 latest live-object lane and end-transition correction

- fresh `21_12-31-15_BM_t` / `_out` evidence changed two assumptions:
  - inbound traffic contained `1797` `REQ_GAME_DATA 0x02` live-object packets
  - every decoded `0x02` object table was still default-only:
    `00001000` or `00000000`; there was no committed bomb object record
  - outbound traffic contained `0` relayed `0x02` packets because the default
    object-table suppression removed the entire `0x02` lane
  - the binary receive handler for `0x02` copies more than object records: it
    also consumes the compact player records and trailer bytes for that lane
- current Kage correction:
  - do not suppress default `0x02` packets anymore
  - relay `0x02` peer-only again like `0x01` and `0x03`
  - keep targeted logging that labels relayed `0x02` packets as default or
    non-default, so the next A-button capture can prove whether a real object
    record finally appears
- the same outbound dump showed the match-end reliable packet was malformed for
  Kage's queue semantics:
  - the first chunk was command `0x16` with a reliable seq
  - following chunks `0x19` and `0x15` had seq `0`
  - clients never ACKed the first chunk, so `0x15` never reached the battle-end
    state machine as an independently reliable command
- `21_13-13-50_BM_t` / `_out` validated the standalone-`0x15` hypothesis was
  incomplete:
  - the board stayed alive and both clients sent live traffic until the 10800
    frame timer expired
  - Kage sent standalone reliable server command `0x15`
  - neither client ACKed `0x15`; Kage retried it four times and both players
    timed out
  - inbound `0x02` object tables were still all default-only, so no committed
    bomb object appeared in the client-origin object lane
- current Kage correction:
  - timer expiry now stops the in-game `0x1c` heartbeat and sends the recovered
    battle-end family as ACK-stepped standalone reliable commands:
    `0x16` settled dead bits, then `0x19` completed/dead bits, then `0x15`
  - the sequence follows the decoded dispatcher around `0x8C093900`; no
    `FLAG_CONTINUE` bundle is used, so every step receives its own reliable seq
- `21_13-49-06_BM_t` / `_out` tested the narrow `0x02` self-echo:
  - outbound `0x02` doubled as expected because Kage sent both peer relay and
    sender echo
  - inbound object tables were still all default-only; no committed bomb object
    appeared
  - FARKUS2 stopped sending live traffic early and timed out before the 10800
    frame match timer expired
- current Kage correction:
  - remove the `0x02` sender echo
  - keep `0x01`, `0x02`, and `0x03` peer-only, preserving the last stable
    live-state shape
  - keep the ACK-stepped `0x16 -> 0x19 -> 0x15` timer-end sequence for the next
    stable long-run test

### 2026-04-21 bomb object-record probe

- dump validation before the next hardware pass:
  - `21_09-17-33_BM_t`: `4288` inbound `cmd=02` packets, `0` non-default object tables
  - `21_13-13-50_BM_t`: `1797` inbound `cmd=02` packets, `0` non-default object tables
  - `21_13-49-06_BM_t`: `358` inbound `cmd=02` packets, `0` non-default object tables
- binary evidence from the new bomb-focused passes:
  - `0x8C075A78` applies the 28 compact `cmd=02` object records into local
    panel/object state
  - state/top-nibble values `2` and `3` route into the on-panel placement path
    when the local panel object is in an empty/default state
  - `0x8C08D534` and `0x8C0906F4` are panel placement helpers tied to the
    `Now X=%d Y=%d allready put on Panel %d` assertion family
- current Kage translation:
  - keep normal `0x01`, `0x02`, and `0x03` relay peer-only
  - record each real player's latest compact live position from `cmd=01/02/03`
  - add an admin-only dashboard control that sends a repeated `cmd=02` object
    probe with one object record set to state `2` at the selected player's last
    live cell
  - the probe is intentionally gated by manual admin action; it does not change
    normal live relay behavior and it does not claim to have mapped the A-button
    request path yet
- validation target:
  - after both real clients reach the game board, click `Drop Bomb Probe`
  - logs should show `armed bomb object probe` and `bomb object probe ... sent`
  - the next decision is evidence-based:
    - if a bomb/object appears, the remaining work is binding a proven object
      creation event to the correct input/request/authority path
    - if no object appears, state `2` alone is not sufficient and the compact
      object record fields or a companion command must be decoded before another
      gameplay patch

### 2026-04-21 state-2 probe failed; staged materialize probe deployed

- fresh hardware result:
  - the dashboard `Drop Bomb Probe` did not make a bomb/object appear
  - clients stayed alive afterward, so the packet shape did not immediately
    poison the live relay lane
- flushed dump evidence from `21_16-57-44_BM_t` / `_out`:
  - inbound live traffic still had `1806` `cmd=02` packets and `0`
    non-default object tables
  - outbound had `90` non-default `cmd=02` records, all matching the admin
    probe shape such as `04382000`
- binary interpretation:
  - the `0x8C075A78` state `2/3` branch does not copy incoming compact
    position bytes into the local object slot; it only updates a compatible
    pre-existing object slot
  - the state `0xF` branch is the branch that copies the incoming position,
    builds local object position state, and routes into panel placement helpers
- current Kage correction:
  - the admin probe is now staged:
    - first sends object state `0xF` for materialization
    - then sends object state `0x2` as the follow-up update
  - normal live gameplay relay remains unchanged and peer-only

### 2026-04-21 staged materialize probe failed; `cmd=01` action lane targeted

- fresh hardware result:
  - staged state `0xF -> 0x2` admin probe still did not render a bomb/object
- dump evidence from `21_17-17-09_BM_t` / `_out`:
  - outbound had non-default staged object records such as `0438f000`,
    `3578f000`, `04382000`, and `35782000`
  - inbound `cmd=02` object tables stayed default-only
- binary evidence now treated as the next target:
  - `0x8C0DDA44` parses server command `0x01`, including the 24-entry compact
    6-byte lane after the player records
  - `0x8C09AD3C` sends command `0x01` from active game state
  - `0x8C09A994` applies received command `0x01` state back into active game
    buffers
- current Kage correction:
  - self-sync only active non-empty `cmd=01` compact action/check-pad records
    back to the source Dreamcast
  - keep `cmd=02` and `cmd=03` peer-only because broader sender echoes already
    regressed live gameplay
  - log `cmd=01 active check-pad self-sync ...` for the next validation run

### 2026-04-22 `cmd=01` self-sync falsified

- fresh hardware result:
  - bombs still did not appear
  - the line-disconnect popup appeared shortly after board load
  - opposite-console movement was not visible
- dump evidence from `22_08-30-56_BM_t` / `_out`:
  - active `cmd=01` compact records were observed for FARKUS, including
    `082040020000`
  - FARKUS received the self-sync packets and then stopped sending live
    `cmd=01/02/03` about 12 seconds after live gameplay began
  - FARKUS2 did not receive equivalent active self-sync packets and continued
    sending live packets until the later timeout
  - Kage did relay FARKUS movement records to FARKUS2 before FARKUS stopped
- current Kage correction:
  - remove `cmd=01` self-sync behavior
  - keep only an observation log for active `cmd=01` compact records
  - leave `cmd=01`, `cmd=02`, and `cmd=03` normal relay peer-only
- next evidence target if peer movement still does not render:
  - determine whether Bomberman needs aggregated server-owned live-state frames
    with all occupied slots populated, instead of raw per-sender relay packets

### 2026-04-22 stable live-state run and aggregate relay patch

- fresh hardware result:
  - no line-disconnect popup during the main in-game window
  - opposite-console movement was still invisible
  - A-button attempts still produced only temporary yellow markers
  - after the clock reached zero, both consoles eventually showed `Time Over!!`
- dump evidence from `22_08-44-01_BM_test` / `_out`:
  - both clients kept sending live `cmd=01`, `cmd=02`, and `cmd=03` through the
    match timer
  - outbound live packets were still one-slot raw peer relays:
    - source `1001` populated slot `0`
    - source `1002` populated slot `1`
  - no committed non-default `cmd=02` object records appeared
  - after server `0x19`, both clients sent reliable `REQ_GAME_DATA cmd=10`;
    the old build left it unhandled immediately before final `0x15` failed
- binary evidence:
  - `0x8C0DDA44`, `0x8C0DDBE4`, and `0x8C0DDD64` parse eight compact player
    records on receive
  - `0x8C09AD3C` and `0x8C09AFE4` build `cmd=01` / `cmd=02` from full active
    game-state buffers
- current Kage translation:
  - keep peer-only live relay and do not self-echo
  - cache each real player's latest compact player record
  - rebuild live `cmd=01`, `cmd=02`, and `cmd=03` outbound payloads so the
    player-record array contains all observed occupied slots
  - preserve the original source id, RUDP flag, action/check-pad lane, object
    table, and trailer bytes
  - ACK client `REQ_GAME_DATA cmd=10` as an end-state signal without relaying it

### 2026-04-22 aggregate relay falsified; post-map slot refresh deployed

- latest dump pair: `22_09-06-42_BM_test` / `_out`
- aggregate live relay worked mechanically:
  - outbound `cmd=01`, `cmd=02`, and `cmd=03` carried both occupied player slots
  - logs showed `slots=03` for both FARKUS and FARKUS2 sources
- hardware result still showed no opposite-console movement and no committed bomb
- binary gate now treated as the active blocker:
  - `0x8C099524` handles Bomberman `cmd=0x0a` and marks non-local real players as slot state `3`
  - `0x8C09A994` / `0x8C09AAD8` only full-copy remote live records for state-3 slots
- latest outbound dump had only two `cmd=0x0a` slot-table packets, both before battle start
- current Kage build sends a post-map `udpA` slot-table refresh after all real clients emit `REQ_GAME_DATA cmd=0x0e` and before deferred `cmd=0x14`
- expected validation line: `slot roster sync (post_map_slot_refresh) host_count=2 occupied_mask=03`
- still falsified and should not be repeated without new binary evidence:
  - live sender self-echo
  - `cmd=02` self-echo
  - state-2 object-only bomb probe
  - staged state-`0xF -> 0x2` object-only bomb probe

Timer-end reliability correction:

- `22_09-06-42_BM_test` proved reliable `cmd=15` still is not ACKed after ACKed `cmd=16` and `cmd=19`
- sending `cmd=15` reliably causes Kage retry failure on packet `f`
- current build sends final no-payload `cmd=15` as non-reliable and logs `reliable=0`

### 2026-04-22 live slot refresh and post-end second-round marker

- latest proof pair: `22_09-51-15_BM_test` / `_out`
- hardware result:
  - post-map slot refresh did not make opposite-console movement render
  - bombs still did not materialize; `cmd=02` object tables remained
    default-only
  - after the countdown, the clients displayed `Time Over!!`, then entered
    additional panels and a second Battle Start / map-transfer sequence
- dump evidence:
  - outbound `cmd=01/02/03` aggregate relays continued through the match timer
  - inbound `cmd=02` had `0` non-default object tables out of `1797`
  - after final non-reliable `cmd=15`, clients sent a new sequence:
    `cmd=04`, `cmd=05`, `cmd=1a`, `cmd=1b`, then `cmd=0f`
- binary evidence:
  - `0x8C09B698` walks state-3 remote slots and clears them to `0` if the
    active battle-object lookup fails
  - this makes the earlier pre-`cmd=14` `post_map_slot_refresh` a plausible
    too-early refresh, because live battle objects are not proven active until
    real `cmd=01/02/03` traffic begins
- current Kage translation:
  - retain the post-map `udpA` refresh before `cmd=14`
  - add one `live_slot_refresh` after all real humans have sent live
    `cmd=01/02/03` records
  - reset per-round sync state on post-end `cmd=04/05/1a/1b`
  - treat post-end `cmd=0f` as the second-round map-complete marker and re-run
    the normal `cmd=14` / liveness / match-timer gate
- validation lines:
  - `live slot refresh armed by ... after all players sent live state`
  - `slot roster sync (live_slot_refresh) host_count=2 occupied_mask=03`
  - `post-end round reset ... waiting for next map-complete marker`
  - `post-map marker (cmd0f_post_end) ...`

### 2026-04-22 long stable gameplay-loop evidence

Latest `22_10-20-25_BM_t` / `_out` dump parsing proves Kage's aggregate live
relay reaches the opposite Dreamcast endpoint with both occupied slots in the
payload, but the client still does not render remote movement.  Therefore raw
peer relay, sender self-echo, and aggregate-only live relay are all insufficient
by themselves.

`cmd=02` object tables remained default-only for the whole run (`0/8256`
non-default inbound and outbound), while `cmd=01` active check-pad/action records
were present for both real players.  Bomb creation therefore still needs the
authoritative object/event path; client-origin `cmd=02` object relay and staged
object probes are falsified.

### 2026-04-22 live `REQ_GAME_DATA` relay falsified as apply path

Fresh hardware/dump evidence:

- clean no-heartbeat dump pair `22_14-07-06_BM_t` / `_out` proved Kage's
  aggregate live payloads reached the opposite consoles:
  - outbound `REQ_GAME_DATA cmd=01/02/03` counts matched inbound live traffic
  - outbound masks were almost entirely `03`, so both real-player slots were
    present in the relayed bodies
  - `REQ_CHAT cmd=0a` was down to one-shot refresh counts only, and no packet
    retry storm occurred
- hardware still showed no opposite-console movement and no committed bombs.

Binary evidence:

- `0x8C093FDC` is the server-command dispatcher that handles:
  - `cmd=01` -> `0x8C0DDA44`
  - `cmd=02` -> `0x8C0DDBE4`
  - `cmd=03` -> `0x8C0DDD64`
  - `cmd=1C` -> in-game liveness table updates
- the same dispatcher family is already used by Kage's working
  non-reliable `REQ_CHAT cmd=1c` in-game liveness sync.
- `0x8C09758C` applies refreshed decoded buffers through:
  - `0x8C09A994` for `cmd=01`
  - `0x8C09AAD8` for `cmd=02`
  - `0x8C09AC08` for `cmd=03`

Current Kage translation:

- keep aggregate body construction for live `cmd=01/02/03`
- keep peer-only delivery and no sender echo
- send live `cmd=01/02/03` as non-reliable `REQ_CHAT` server-command traffic so
  the recovered `0x8C093FDC` decode/apply path is reached
- keep map/state `cmd=05/0d/0e/1a/1b` on the existing `REQ_GAME_DATA` relay path

Validation target:

- next outbound dump should show `REQ_CHAT cmd=01/02/03` after board load
- if remote movement appears, continue bomb work from the observed `cmd=01`
  action/check-pad lane and the still-default `cmd=02` object-table evidence
- if remote movement still does not appear, this packet-family correction is
  falsified and the next target is a remaining server-owned companion command or
  state gate, not periodic `cmd=0a` and not sender echo

### 2026-04-22 movement validated and synthetic bomb commit

Fresh hardware/dump evidence:

- `D:\kageserver\data\22_15-33-28_BM_t.dmp`
- `D:\kageserver\data\22_15-33-28_BM_t_out.dmp`
- user-visible result:
  - opposite-console player movement now renders on both Dreamcasts
  - bombs still do not appear; A press still only makes the temporary yellow
    tile marker
- parser evidence:
  - outbound live `cmd=01`, `cmd=02`, and `cmd=03` are now `REQ_CHAT`
  - inbound client `cmd=02` object tables stayed default-only:
    `0/4789` non-default
  - outbound pre-patch `REQ_CHAT cmd=02` object tables also stayed
    default-only: `0/4789` non-default
  - active `cmd=01` action/check-pad records were observed with encoded cells
    distinct from the sprite-position records:
    - `082040020000`
    - `044040020000`
    - `042040020000`
    - `354040120000`
    - `316040120000`
    - `356040120000`

Binary correlation:

- `0x8C093FDC` is the server-command dispatcher that now explains movement
  success for `cmd=01/02/03`
- `0x8C0DDBE4` decodes `cmd=02` object tables
- `0x8C075A78` applies those object records; state top-nibble `0xF` copies
  incoming position into the local object slot, and state top-nibble `0x2`
  routes through the placed/on-panel branch

Current Kage translation:

- preserve the validated live movement path: non-reliable `REQ_CHAT`
  `cmd=01/02/03`
- detect non-empty `cmd=01` action-lane bursts per player
- arm one synthetic compact object record at the action-lane encoded cell, not
  the last sprite cell
- merge active synthetic object records into every outgoing `REQ_CHAT cmd=02`
  payload so subsequent default object tables cannot immediately erase the
  commit
- update the admin bomb probe to use `REQ_CHAT` instead of `REQ_GAME_DATA` if
  it is used again

Validation target:

- logs should show `armed synthetic bomb from cmd=01 action`
- outbound dump should show non-default `REQ_CHAT cmd=02` object records
- first visual goal is a committed bomb/object after A press; explosion/result
  lifecycle remains a separate follow-up unless the state `0xF -> 0x2`
  sequence also advances naturally

### 2026-04-22 object lane proven, bomb-up item identified

Fresh hardware result:

- movement still works on opposite consoles
- A press produced a visible bomb power-up item card, not a placed bomb

Evidence:

- `D:\kageserver\data\22_15-57-44_BM_teqr.dmp`
- `D:\kageserver\data\22_15-57-44_BM_teqr_out.dmp`
- outbound `REQ_CHAT cmd=02` had `1774/5916` non-default object tables
- representative outbound object record: `0440f002`
- representative client follow-up object record: `04402000`

Correction:

- `f002` is now recorded as a bomb-up item-card form for later hidden-item drops
- decompiled local bomb placement at `0x8C0906F4` sets object subtype `0x0e`
- Kage now sends synthetic bomb materialization as subtype `0x0e`, not the
  action-record low nibble `0x02`

### 2026-04-22 `f00e` object injection falsified

- hardware result: `f00e` still rendered the same power-up/card object, and pickup displayed a clock icon plus `Judge!!`
- log evidence: `object=3160:f00e`, `object=0420:f00e`, `object=3560:f00e` left Kage
- `0x8C0DD74E` / `0x8C0DD698` prove compact `cmd=02` object records bit-pack fields; the low nibble is not the large object subtype byte
- `0x8C0906F4` writes true local bomb subtype `0x0e` into large object byte `+0x0a`, so copying that value into the network low nibble was the wrong translation
- current source disables automatic synthetic object injection and preserves action-lane logging for the next evidence pass

### 2026-04-22 action-script placed-bomb path

Fresh Ghidra evidence now separates the placed-bomb helper from the compact object subtype lane:

- `0x8C0906F4` is reached through the action/script engine, not directly from `cmd=02` object low-nibble values.
- `0x8C0470F4` is an action-engine entry referenced from data tables at `0x8C06F274` and `0x8C06F3F8`.
- `0x8C0473A6` branches into `0x8C0479D2` when the current script/action record reaches the opcode-1 terminal path.
- `0x8C0479D2` loads per-player/per-slot state via offsets `0x0768`, `0x0278`, and `0x00AC`, then calls `0x8C0906F4`.

Server translation status:\n\n- preserve validated peer movement on non-reliable `REQ_CHAT cmd=01/02/03`\n- keep synthetic `cmd=02` object injection disabled\n- do not reintroduce active `cmd=01` sender self-sync unless a new binary distinction explains the prior `22_08-30-56_BM_t/_out` falsification\n- next target is action-table ownership / local-vs-remote `0x40` flag handling, not another echo variant

### 2026-04-22 bomb action table follow-up

Additional action-table decompilation shows the local bomb subtype is meaningful inside the client object/action system, but still not as a direct network low nibble:

- `0x8C065588` iterates subtype/index values and special-cases `0x0e`.
- the `0x0e` branch calls `0x8C018554(..., 5)`.
- `0x8C018554` clears state under object offset `+0x0118`, calls `0x8C06471E` through `+0x0110` / `+0x0768`, and stores a handle at `+0x016c`.
- these fields overlap the action-engine offsets that gate the `0x8C0479D2 -> 0x8C0906F4` local bomb-helper path.

Conclusion: keep Kage unchanged for hardware. The next work should map the producer/consumer chain for `+0x0163`, `+0x016c`, and the `0x0e` action-table branch before sending any new bomb experiment.
