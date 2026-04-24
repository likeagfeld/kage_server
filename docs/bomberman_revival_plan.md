# Bomberman Online Revival Plan

## Scope

This document is the current static-analysis plan for reviving **Bomberman Online**
on Kage using the extracted Dreamcast executable:

- `D:\bomberman online gdi\[GDI] Bomberman Online (US)\extracted\1ST_READ.BIN`

It is grounded in three evidence sources:

1. Static string extraction from the real game binary.
2. SH-4 disassembly windows from the same binary using Capstone.
3. Cross-reference against working Kage implementations:
   - `D:\kageserver\bomberman.cpp`
   - `D:\kageserver\model.cpp`
   - `D:\kageserver\outtrigger.cpp`
   - `D:\kageserver\propeller.cpp`

## Truthfulness Note

Static analysis can get us very close, but it cannot honestly give **100% certainty**
before live validation on real hardware. The right standard here is:

- every known step is tied to evidence
- every unknown is made explicit
- no next implementation step depends on blind guessing

That is what this plan is designed to do.

## Reproducible Artifacts

Analysis is now reproducible with:

- Script: `D:\kageserver\tools\analyze_bomberman_binary.py`

Generated outputs:

- `D:\kageserver\docs\generated\bomberman_client_summary.json`
- `D:\kageserver\docs\generated\bomberman_client_strings.tsv`
- `D:\kageserver\docs\generated\bomberman_flow_strings.tsv`
- `D:\kageserver\docs\generated\bomberman_key_disasm.txt`

Ghidra-backed decompilation artifacts:

- Project: `D:\ghidra_projects\BombermanOnlineDC`
- Imported program: `1ST_READ.BIN`
- Headless helper scripts:
  - `D:\kageserver\tools\ghidra_scripts\DumpFunctionsByAddress.java`
  - `D:\kageserver\tools\ghidra_scripts\DumpFunctionsInRanges.java`
  - `D:\kageserver\tools\ghidra_scripts\DumpListingRanges.java`
- Decompiled export passes:
  - `D:\kageserver\docs\ghidra_decompile\initial`
  - `D:\kageserver\docs\ghidra_decompile\pass2`
  - `D:\kageserver\docs\ghidra_decompile\pass3`
- Raw listing windows for unresolved anchor regions:
  - `D:\kageserver\docs\ghidra_decompile\pass4_listing`

Current binary assumptions proven enough to use:

- extracted binary size: `2543588`
- inferred load base: `0x8C010000`
- extracted printable strings: `6066`

## What The Binary Proves

### 1. The client has a named Kage-facing state machine

The binary contains explicit state strings for Kage lifecycle transitions:

- login / bootstrap:
  - `Now Connecting to Server....`
  - `Use DNS and Connect to Bootstrap Server`
  - `User IP-Add Connect to Bootstrap Server`
  - `Could not found Server Address.`
  - `Failed to Logon to game server.`
  - `Can't get Kage Server IP Addres from DNS.`
- lobby:
  - `LOBBY LISTED CKageApp::Kage_Lobby_Listed ()`
  - `LOBBY LISTED CKageApp::Kage_Lobby_Joined ()`
  - `QUERY ATTRIBUTE CKageApp::Kage_Lobby_Joined ()`
  - `QUERY USERIN CKageApp::Kage_Lobby_Joined ()`
  - `REQUEST:: QueryLobbyRequest in  CKageApp::Status_RequestLobbyList ()`
- room:
  - `ROOM CREATE_REQUESTED`
  - `ROOM CREATE_COMPLETED`
  - `ROOM QUERYROOMS_REQUESTED`
  - `ROOM QUERYATTRIBUTE_REQUESTED`
  - `ROOM QUERYUSERIN_REQUESTED`
  - `Completed CGameRoom::QueryUserInRoomCallBack()`
- battle flow:
  - `The room master has set new rules.`
  - `---- Start Game a Sync Time! ----`
  - `All Battle End. Send Signal CLI_SET_SETTLED.`
  - `---- End Game Play ----`

This means the client is not opaque: it exposes the major online lifecycle nodes
directly in the binary.

### 2. The client code is split into clear responsibility areas

Important class strings found in the real binary:

- `CServerConfig`
- `CKageApp`
- `CLobby`
- `CGameRoom`
- `CNetworkClient`
- `CNetworkServer`

This strongly suggests the online flow is layered roughly as:

1. `CServerConfig` / pre-network transport setup
2. `CKageApp` login and high-level Kage orchestration
3. `CLobby` object lifecycle and callbacks
4. `CGameRoom` object lifecycle and callbacks
5. `CNetworkClient` / `CNetworkServer` battle-time synchronization

### 3. The inferred load base is usable

The analysis script found direct xrefs when the binary is treated as loading at
`0x8C010000`. Examples:

- `ROOM CREATE_REQUESTED` at file offset `0x001798f0` / virtual `0x8C1898F0`
- `ROOM QUERYROOMS_REQUESTED` at file offset `0x00179a44` / virtual `0x8C189A44`
- `ROOM QUERYUSERIN_REQUESTED` at file offset `0x00179b08` / virtual `0x8C189B08`
- `Failed to Logon to game server.` at file offset `0x00178894` / virtual `0x8C188894`
- `Can't get Kage Server IP Addres from DNS.` at file offset `0x00178ad8` / virtual `0x8C188AD8`

That gives us usable address anchors for deeper reverse engineering.

### 4. Room UI state is table-driven

The client does not appear to hardcode room status text one string at a time.
It uses pointer tables for room-state labels.

Evidence from `D:\kageserver\docs\generated\bomberman_client_summary.json`:

- room state table at `0x8C0E7868`
  - `ROOM FOUND_USERIN`
  - `ROOM CREATE_REQUESTED`
  - `ROOM CREATE_COMPLETED`
  - `ROOM CREATE_FAILE`
  - `ROOM DELETE_REQUESTED`
  - `ROOM DELETE_COMPLETED`
  - `ROOM DELETE_FAILED`
  - `ROOM JOIN_REQUESTED`
  - `ROOM JOIN_COMPLETED`
  - `ROOM JOIN_FAILED`
  - `ROOM LEAVE_REQUESTED`
- secondary room query table at `0x8C0E7990`
  - `ROOM LEAVE_COMPLETED`
  - `ROOM LEAVE_FAILED`
  - `ROOM ATTRIBUTE_REQUESTED`
  - `ROOM ATTRIBUTE_COMPLETE`
  - `ROOM ATTRIBUTE_FAILED`
  - `ROOM QUERYROOMS_REQUESTED`
  - `ROOM QUERYROOMS_COMPLETED`
  - `ROOM QUERYROOMS_FAILED`
  - `ROOM NOT_FOUND_ROOMS`
  - `ROOM QUERYATTRIBUTE_REQUESTED`
  - `ROOM QUERYATTRIBUTE_COMPLETED`
  - `ROOM QUERYATTRIBUTE_FAILED`
  - `ROOM QUERYUSERIN_REQUESTED`

This matters because popup flicker is probably not random UI behavior. It is
likely the client oscillating between adjacent internal state values when it does
not get the exact callback/result it expects.

### 5. Disconnect messaging is also table-driven

The client has a compact disconnect reason label table at `0x8C0E3D44`.

Known mapped labels:

- `Could not connect to tranport device.`
- `Connection timed out.`
- `Kicked out by Room and Disconnected.`
- `Disconnected by Server Request.`

This tells us disconnect handling is a structured result path, not just ad hoc
error text.

### 6. The hard-coded Bomberman hostname is referenced in multiple config paths

The hostname `master.bomberman-hudson.games.sega.net` is referenced at least
seven times in the executable.

The repeated xrefs cluster near:

- `0x8C023A30`
- `0x8C023F54`
- `0x8C0244A4`
- `0x8C024704`
- `0x8C024838`
- `0x8C0249F0`
- `0x8C024E40`

This strongly suggests the game carries multiple transport/server config records
that all point at the same master hostname rather than having a single one-off
global string use.

### 7. Lobby and room roster flows are distinct on the client side

Useful roster/list format strings have separate xref clusters:

- room list:
  - `GameRoom Name:%s User:%d Max:%d`
- lobby list:
  - `Lobby Name:%s User:%d`
- lobby users:
  - `ID:%d NAME:%s`
- room users:
  - `UserID:%d NAME:%s`
  - `UserID:%d Leaved.`
- room-master transition:
  - `%s has become the new room master.`

This matters because it implies Bomberman does not treat lobby and room rosters as
the same generic callback. We should not assume a fix for one automatically fixes
the other.

### 8. Ghidra confirms a room callback/result selector layer

The `0x8C0F67xx` cluster is now partially decompiled, not just string-mapped.

Evidence:

- `D:\kageserver\docs\ghidra_decompile\pass3\8c0f6770_FUN_8c0f6770.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c0f67d6_FUN_8c0f67d6.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c0f69c2_FUN_8c0f69c2.c`

What these show:

- two closely related helper functions normalize an input selector through
  `FUN_8c0f6006(...)`
- after normalization, the selector is bucketed into:
  - class `1` or `4`
  - class `2`
  - class `3`
- each class then indexes a different table-backed 4-byte value
- a companion helper indexes fixed-size records using:
  - `0x20` bytes for some selector classes
  - `0x40` bytes for another selector class

Why this matters:

- room query callbacks are definitely not a flat one-handler path
- the client has a small typed result-class layer between raw network replies and
  room UI updates
- popup flicker is therefore more likely to be a wrong callback class / wrong
  record selection problem than a pure timing issue

### 9. Room label helpers are now decompiled, not just inferred

Evidence:

- `D:\kageserver\docs\ghidra_decompile\pass3\8c0f7924_FUN_8c0f7924.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c0f795a_FUN_8c0f795a.c`

What these show:

- the client has explicit helper accessors that return values from the room-state
  label tables already identified statically
- these helpers behave like small getters over shared table data, not ad hoc string
  references

Why this matters:

- visible room popups are tightly coupled to specific internal room-state values
- when the client flickers between room dialogs, it is almost certainly bouncing
  between adjacent state values chosen by these table-backed helpers

### 10. Battle synchronization uses typed object buckets

Evidence:

- `D:\kageserver\docs\ghidra_decompile\pass3\8c0a8d76_FUN_8c0a8d76.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c0a8dec_FUN_8c0a8dec.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c0a8ea6_FUN_8c0a8ea6.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c0a8f14_FUN_8c0a8f14.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c0a8f78_FUN_8c0a8f78.c`

What these show:

- the match-time logic iterates object collections and selects buckets by type tags
  such as:
  - `2`
  - `4`
  - `0x10`
  - `0x20`
- these functions update structured blocks at offsets like:
  - `+0x18`
  - `+0x1c`
  - `+0x20`
  - `+0x24`
  - `+0x28`
  - `+0x2c`

Why this matters:

- Bomberman’s online battle synchronization is structured around typed state lanes,
  not one monolithic packet blob
- for Kage revival, this means pre-match rule/start handling should be modeled as a
  state machine first, while full in-game emulation will likely need per-object or
  per-channel synchronization later

### 11. The network/config bootstrap region is broader than a single hostname fetch

Evidence:

- `D:\kageserver\docs\ghidra_decompile\pass3\8c0246c4_FUN_8c0246c4.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c024b80_FUN_8c024b80.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c024c72_FUN_8c024c72.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c024f40_FUN_8c024f40.c`
- `D:\kageserver\docs\ghidra_decompile\pass3\8c02502a_FUN_8c02502a.c`

What these show:

- the hard-coded Bomberman hostname lives inside a larger transport/configuration
  object graph
- the nearby functions look like low-level configuration writers, selectors, and
  guards rather than one direct "resolve hostname and connect" wrapper

Why this matters:

- restoring login/bootstrap behavior is not only about DNS success
- there are likely multiple config fields and transport mode checks that have to
  line up before the client enters the Kage login path cleanly

### 12. High-value request and callback handlers are now decompiled

The most useful new breakthrough is that several previously raw callsites are now
forced into real Ghidra functions and decompiled.

Evidence:

- `D:\kageserver\docs\ghidra_decompile\pass9_forced_funcs\8c0962a4_FUN_8c0962a4.c`
- `D:\kageserver\docs\ghidra_decompile\pass9_forced_funcs\8c0e6746_FUN_8c0e6746.c`
- `D:\kageserver\docs\ghidra_decompile\pass9_forced_funcs\8c0e680e_FUN_8c0e680e.c`
- `D:\kageserver\docs\ghidra_decompile\pass9_forced_funcs\8c0e80f0_FUN_8c0e80f0.c`
- `D:\kageserver\docs\ghidra_decompile\pass9_forced_funcs\8c0e8fa0_FUN_8c0e8fa0.c`
- `D:\kageserver\docs\ghidra_decompile\pass9_forced_funcs\8c0e9084_FUN_8c0e9084.c`
- `D:\kageserver\docs\ghidra_decompile\pass10_more_forced\8c0e1b68_FUN_8c0e1b68.c`
- `D:\kageserver\docs\ghidra_decompile\pass10_more_forced\8c0e1c42_FUN_8c0e1c42.c`
- `D:\kageserver\docs\ghidra_decompile\pass10_more_forced\8c0e90ec_FUN_8c0e90ec.c`
- `D:\kageserver\docs\ghidra_decompile\pass10_more_forced\8c0e9128_FUN_8c0e9128.c`

Why this matters:

- these are no longer just xref regions
- they expose the concrete client-side lifecycle for lobby querying, room querying,
  room list maintenance, room attribute updates, and user list callbacks

### 13. `CKageApp` issues room-user queries from a concrete state branch

`8c0962a4_FUN_8c0962a4.c` is now one of the strongest matchmaking anchors.

What it shows:

- there is a state/value switch on the current online mode
- when that state reaches `9`, the client:
  - logs `Request QueryUserInRoomRequest()`
  - fetches the active room identifier
  - dispatches a room-user query request
- later states in the same function cover:
  - joining a room
  - creating/allocating the room object UI/state container
  - room-name submission / text-entry related work

Why this matters:

- we now have direct evidence that room-user querying is an intentional next step in
  the normal room flow, not a side effect
- Kage should treat room-user replies as part of the expected room-enter/create
  handshake, not as optional follow-up traffic

### 14. Room list callbacks maintain a linked list of room objects

The `0x8C0E6746` / `0x8C0E680E` pair is especially valuable.

`8c0e6746_FUN_8c0e6746.c` shows:

- on success, the client allocates a `0x28`-byte room entry object
- it copies multiple fields from callback payload offsets:
  - `+0x10`
  - `+0x14`
  - `+0x18`
  - `+0x1c`
  - `+0x20`
- it appends the new room object into a linked list
- it increments a room count at object offset `+0x38`

`8c0e680e_FUN_8c0e680e.c` shows:

- room removal is keyed by the callback's first integer field
- matching room objects are unlinked from the same list
- the same room count at `+0x38` is decremented

Why this matters:

- room-query responses are definitely object-driven and incremental on the client
- if Kage returns malformed room ids or inconsistent room object fields, the client
  will poison its local linked-list state instead of gracefully ignoring the bad row

### 15. Room and lobby attribute callbacks are tag-based

The client does not treat attribute changes as opaque blobs.

Evidence:

- `8c0e80f0_FUN_8c0e80f0.c`
- `8c0e8fa0_FUN_8c0e8fa0.c`

What they show:

- both lobby and room attribute update callbacks locate an existing object by id
- the callbacks branch on a field tag name rather than a positional index
- in the lobby attribute path, Ghidra resolves the tag constants directly as:
  - `GAME`
  - `NAME`
  - `USER`
- in the room attribute path, one branch clearly updates:
  - room name
  - room attribute flags
  - open/locked presentation derived from the attribute bitmask

Why this matters:

- Kage's `REQ_QRY_ROOM_ATTR` and `REQ_CHG_ROOM_ATTR` behavior needs to preserve the
  exact field-tag semantics the client expects
- the room-attribute flow is not just "send one attributes integer"; it is consumed
  as a tagged object update on the client side

### 16. Lobby and room query state wrappers are now explicit

The query-state wrappers are now visible in decompiled code.

Evidence:

- `8c0e1b68_FUN_8c0e1b68.c`
- `8c0e1c42_FUN_8c0e1c42.c`

What `8c0e1b68_FUN_8c0e1b68.c` shows:

- when lobby-query state is `0`, the client logs
  `REQUEST:: QueryLobbyRequest in CKageApp::Status_RequestLobbyList ()`,
  sends the request, and advances local state to `1`
- when state reaches `0x11`, it logs lobby-query completion and advances to `2`
- when state reaches `0x13`, it logs "can't find any lobby" but still routes to the
  same post-query state as completion
- when state reaches `0x12`, it is treated as query failure and goes to state `5`

What `8c0e1c42_FUN_8c0e1c42.c` shows:

- room-query state codes are interpreted differently from lobby-query codes
- important mapped values now confirmed:
  - `0x11` -> room-query completion path
  - `0x12` -> room-query failure path
  - `0x13` -> "can't find any game rooms" path
  - `2`, `8` -> route to local state `3`
  - `5` -> route to local state `0`

Why this matters:

- room-query and lobby-query status codes are not interchangeable
- Kage can no longer rely on generic "success/failure" reasoning alone when these
  states are involved; the client has distinct follow-up behavior for each code

### 17. Lobby create/delete and room-user callbacks are no longer guesses

Evidence:

- `8c0e9084_FUN_8c0e9084.c`
- `8c0e90ec_FUN_8c0e90ec.c`
- `8c0e9128_FUN_8c0e9128.c`

What they show:

- lobby creation success logs `Lobby %d %s Created.`
- lobby delete success logs `Lobby %d Deleted.`
- room-user callback success logs `UserID:%d NAME:%s`
- the room-user callback also copies string/name data from the callback payload into
  stack/object buffers before logging

Why this matters:

- we now know the client has explicit object creation, deletion, and roster callback
  handlers for these flows
- the room-user callback is part of the normal object-population path, which
  reinforces that Kage's room-user response layout is a first-class compatibility
  requirement

### 18. The lobby and room follow-up callbacks are more granular than one "query users" handler

Evidence:

- `8c0eaba8_FUN_8c0eaba8.c`
- `8c0eac90_FUN_8c0eac90.c`
- `8c0ead7e_FUN_8c0ead7e.c`
- `8c0eae3c_FUN_8c0eae3c.c`

What they show:

- `0x8C0EABA8` applies lobby attribute changes by lobby object id and explicit tag,
  then emits a completion state code
- `0x8C0EAC90` handles changed user-property data for the lobby and forwards the
  payload to a dedicated helper
- `0x8C0EAD7E` is a room-user add/log callback that reads payload fields at
  `+0x10`, `+0x14`, and `+0x18`, prepares a name buffer, and logs
  `UserID:%d NAME:%s`
- `0x8C0EAE3C` is a small follow-up shim that branches on `GAME`, `NAME`, and
  `USER` tags and only triggers extra refresh behavior for some tags

Why this matters:

- the client does not treat lobby updates, room-user population, and post-update
  refresh as one flat event
- Kage needs to preserve the expected tag split between lobby attribute changes,
  user-property updates, and room-user population or the UI can partially update
  and then destabilize
- probing nearby candidate entry points around `0x8C0EAEA0`, `0x8C0EAEB8`, and
  `0x8C0EAED0` collapsed back into this same callback family instead of revealing
  a clean standalone "user left" handler, which suggests the leave/update path
  likely shares the same tagged machinery

### 19. One earlier "callback" was actually a plain helper, which narrows the real target set

Evidence:

- `8c09ea74_FUN_8c09ea74.c`
- `8c0eae94_FUN_8c0eae94.c`
- `8c0eaf00_8c0eb100.lst`

What they show:

- the pointer at `0x8C0EAF40` looked like a callback target at first
- after decompilation, it resolves to `0x8C09EA74`, which is only a string-copy
  helper with aligned and unaligned copy paths

Why this matters:

- this removes a false lead from the room-user flow map
- the real room-user lifecycle logic is in the callback shims and later dispatch
  helpers, not in `0x8C09EA74`

### 20. The pre-match start path has an explicit failure state and a separate transition/cleanup gate

Evidence:

- `8c098ddc_FUN_8c098ddc.c`
- `8c098e50_FUN_8c098e50.c`
- `8c098e8c_FUN_8c098e8c.c`

What they show:

- `0x8C098E50` is a start-failure popup helper; it shows
  `A game was not able to be started.` and sets a local state field to `8`
- `0x8C098DDC` builds a compact 4-byte packet during a pre-match branch, chooses
  opcode `0x0b` or `0x0c`, folds in a boolean derived from counter/state
  comparisons, and sends it through a lower-level emitter
- `0x8C098E8C` is the next-stage transition handler; when its counters and state
  values line up, it tears down several UI objects, clears the current pre-match
  object, optionally fires another callback, and advances the local state to
  `0x0b`

Why this matters:

- Bomberman's start path is not "send start once and hope"
- the client is tracking counters, a failure state (`8`), and a successful
  transition state (`0x0b`) around the pre-match gate
- Kage will likely need to satisfy a compact ready/start handshake before the
  client stops treating the path as a failed start attempt

### 21. The room-user object path is built from alloc/reset helpers plus a byte-tag dispatcher

Evidence:

- `8c0eaf7c_FUN_8c0eaf7c.c`
- `8c0eafc4_FUN_8c0eafc4.c`
- `8c0eb0d4_FUN_8c0eb0d4.c`

What they show:

- `0x8C0EAF7C` allocates or initializes a `0x4c`-byte object and zeros key fields
- `0x8C0EAFC4` resets that object and optionally frees it depending on flags
- `0x8C0EB0D4` reads a byte tag at offset `+0x12`, uses it to index a table of
  offsets and handlers, and dispatches to a tag-specific worker

Why this matters:

- room-user and related callback payloads appear to feed a typed record/object
  system, not one generic struct
- that raises confidence that Kage needs to preserve per-tag packet identity in
  addition to matching the raw payload bytes

## Key Client Regions

These are the most useful SH-4 windows identified so far. Full dumps are in
`D:\kageserver\docs\generated\bomberman_key_disasm.txt`.

### `0x8C0F13D2` to roughly `0x8C0F1728`

Purpose:

- bootstrap failure cleanup
- DNS / login error unwind
- object teardown before showing fatal network errors

Why it matters:

- this is the client path behind:
  - `Could not found Server Address.`
  - `Failed to Logon to game server.`
  - `Can't get Kage Server IP Addres from DNS.`

### `0x8C0F096A` to roughly `0x8C0F0A1C`

Purpose:

- callback-table style dispatch around lobby entry / follow-up queries

Why it matters:

- this is likely where the client decides which response handler to call next
- it is relevant to the popup flicker and room-menu instability we already saw

### `0x8C0F1950` to roughly `0x8C0F1D6C`

Purpose:

- post-login `CKageApp` lobby setup and request chaining

Why it matters:

- this region appears to sequence:
  - lobby queries
  - attribute queries
  - user queries
  - room list follow-up work

This is the best current client-side anchor for exact matchmaking order.

### `0x8C0F795A` to roughly `0x8C0F7990`

Purpose:

- `CGameRoom` state-label helper

Why it matters:

- it likely feeds the visible `ROOM *_REQUESTED / COMPLETED / FAILED` status text
- useful for correlating exact on-screen states with internal transitions

### `0x8C0F80B8` to roughly `0x8C0F8112`

Purpose:

- `CGameRoom::QueryUserInRoomCallBack()`-adjacent room object access

Why it matters:

- immediate room freeze/flicker behavior strongly implicates the room-user query path
- this is the highest-value client callback region for our next debugging pass

### `0x8C0F67E0` to roughly `0x8C0F6990`

Purpose:

- clustered room list / room attr / room user callback handling

Why it matters:

- this region branches on small result codes and then routes into room-specific
  callbacks
- this is likely where the client turns generic Kage replies into room UI state
  transitions
- it is the best current client-side anchor for diagnosing room menu flicker

Ghidra now partially confirms this:

- `8c0f6770_FUN_8c0f6770.c`
- `8c0f67d6_FUN_8c0f67d6.c`
- `8c0f69c2_FUN_8c0f69c2.c`

These are no longer speculative anchor names. They are real decompiled helpers in
the callback cluster.

### `0x8C0E3CE0` to roughly `0x8C0E3D44`

Purpose:

- disconnect / timeout reason dispatch

Why it matters:

- this region appears to map numeric disconnect causes to string-table labels
- once battle flow is working, this is where we can align server-side disconnect
  causes with exact client-visible messages

### `0x8C0A8D80` onward

Purpose:

- online battle object update path near rules/start strings

Why it matters:

- this region is our current static anchor for:
  - rules setup
  - start synchronization
  - battle state transfer

## Flow Map

### Phase 1: Transport, DNS, Bootstrap, Login

### Proven client flow

The client contains all of the following transport and bootstrap states:

- LAN / modem / PPP / PPPoE probing
- DNS initialization
- bootstrap server lookup by hostname
- Kage login and login-specific error handling

Evidence:

- `D:\kageserver\docs\generated\bomberman_flow_strings.tsv`
  - `Use DNS and Connect to Bootstrap Server`
  - `Could not found Server Address.`
  - `Failed to Logon to game server.`
  - `CKageApp: Login Faile KK_INVALID_TOKEN.`
  - `CKageApp: Login Faile KK_TIME_OUT_LOGIN.`

### Server requirements implied by the client

Kage must satisfy:

1. hostname resolution for `master.bomberman-hudson.games.sega.net`
2. successful bootstrap/login response semantics
3. expected game class / token / user validation behavior

### Current status

- DNS override and DreamPi bridge are good enough to reach Kage.
- Bomberman already reached the lobby in live testing, so Phase 1 is partially proven live.

### Remaining work

- map login result codes to exact user-facing failures
- compare client error strings to Kage login return paths

### Phase 2: Lobby List, Lobby Join, Lobby Queries

### Proven client flow

The binary explicitly exposes this order:

1. query lobby list
2. lobby listed / joined
3. query lobby attributes
4. query lobby users

Evidence:

- `REQUEST:: QueryLobbyRequest in  CKageApp::Status_RequestLobbyList ()`
- `LOBBY LISTED CKageApp::Kage_Lobby_Listed ()`
- `LOBBY LISTED CKageApp::Kage_Lobby_Joined ()`
- `QUERY ATTRIBUTE CKageApp::Kage_Lobby_Joined ()`
- `QUERY USERIN CKageApp::Kage_Lobby_Joined ()`

### Kage comparison

Relevant server-side code:

- duplicate-query replay logic: `D:\kageserver\model.cpp:38` and `D:\kageserver\model.cpp:343`
- query-rooms handling: `D:\kageserver\model.cpp:587`
- lobby query/user flow is already implemented in generic model code

### Current status

- live testing proved the client can reach and join the DCNet lobby
- lobby chat works

### Remaining work

- verify exact packet replay semantics for all read-only lobby queries
- compare lobby query response ordering against client callback expectations

### Phase 3: Room List, Room Create, Room Join, Room Query User

### Proven client flow

The binary exposes this room lifecycle:

1. create / delete / join / leave room
2. query room list
3. query room attributes
4. query users in room
5. room callback completion

Evidence:

- `ROOM CREATE_REQUESTED`
- `ROOM JOIN_REQUESTED`
- `ROOM QUERYROOMS_REQUESTED`
- `ROOM QUERYATTRIBUTE_REQUESTED`
- `ROOM QUERYUSERIN_REQUESTED`
- `Completed CGameRoom::QueryUserInRoomCallBack()`

### Current live signal

This is the unstable zone we have already reproduced:

- popup flicker starts in or before room-menu transitions
- input can freeze after room create / room query actions
- room creation has succeeded at least once
- entering a created room and chatting has succeeded at least once

That tells us room flow is **partially** correct but still semantically wrong enough
to destabilize the client.

### Kage comparison

Relevant server-side code:

- query replay exceptions: `D:\kageserver\model.cpp:38`
- room query users response: `D:\kageserver\model.cpp:457`
- room query rooms response: `D:\kageserver\model.cpp:587`
- room create response path: `D:\kageserver\model.cpp:624`

### Immediate conclusion

The most likely remaining room blockers are:

1. subtle query-response semantics mismatch for `REQ_QRY_ROOMS`
2. subtle roster shape mismatch for `REQ_QRY_USERS`
3. attribute ordering / chunking mismatch during create-room follow-up
4. unexpected room-state transitions inside the client callback cluster near
   `0x8C0F67E0`

### Next reverse-engineering work

1. trace `CGameRoom::QueryUserInRoomCallBack()` inputs more deeply
2. identify the exact callback sequence after `ROOM CREATE_REQUESTED`
3. correlate room state label transitions with Kage packet order in logs and dumps

### Phase 4: Rule Setup, Ready State, Start Synchronization

### Proven client flow

The client definitely has a rule / start phase after room creation:

- `The room master has set new rules.`
- `A game was not able to be started.`
- `---- Start Game a Sync Time! ----`
- ` PlayGame`
- ` SERVER_START`
- `CSetGameRule`
- `CSetupRule`
- `CCheckRule`

Additional related anchors now mapped:

- room-master notice path near `0x8C0A9960`
- rule/start failure path near `0x8C098E50`
- battle lifecycle strings:
  - `All Battle End. Send Signal CLI_SET_SETTLED.`
  - `--- Svr Settled Recv Dead Bits %ld`
  - `--- Svr Completed ed Recv Dead Bits %ld`

### Kage comparison

Bomberman server hooks currently exist but are still shallow:

- rules: `D:\kageserver\bomberman.cpp:470`
- start battle: `D:\kageserver\bomberman.cpp:493`
- agree new rules: `D:\kageserver\bomberman.cpp:503`
- received new rules: `D:\kageserver\bomberman.cpp:558`

Analogous completed implementations:

- Outtrigger explicit ready/start sync:
  - `D:\kageserver\outtrigger.cpp:118`
  - `D:\kageserver\outtrigger.cpp:130`
  - `D:\kageserver\outtrigger.cpp:437`
  - `D:\kageserver\outtrigger.cpp:488`
- Propeller Arena explicit start-state tracking:
  - `D:\kageserver\propeller.cpp:319`
  - `D:\kageserver\propeller.cpp:599`
  - `D:\kageserver\propeller.cpp:607`
  - `D:\kageserver\propeller.cpp:647`

### Important implication

We should treat Outtrigger and Propeller as **state-machine templates**, not packet
templates. Bomberman likely needs:

1. room master rule proposal
2. client rule acknowledgement
3. full-room ready state
4. synchronized start marker
5. per-client start acknowledgement

That is not fully modeled in Kage yet.

### Phase 5: In-Game Replication, Win/Lose, Return-To-Room, Disconnects

### Proven client flow

The binary contains explicit battle-end and result strings:

- `All Battle End. Send Signal CLI_SET_SETTLED.`
- `--- Svr Settled Recv Dead Bits %ld`
- `--- Svr Completed ed Recv Dead Bits %ld`
- `---- Hyper Rule Update and Game End! ----`
- `---- Normal Rule Update History and Game End! ----`
- `---- End Game Play ----`
- `Returned to the game room due to lack of players.`
- `Kicked out by Room and Disconnected.`
- `Disconnected by Server Request.`
- `CVictory`
- `CExitMenuYouLose`

### Important implication

The battle flow is not just a start packet and some movement:

1. the server tracks death / settlement state
2. the client expects an orderly end-of-battle protocol
3. the client expects room return behavior after incomplete matches

We also now know there is a dedicated user-visible message path for:

- timeout
- kicked from room
- server-request disconnect
- return-to-room because of lack of players

### What “bot seats only” can and cannot prove

Bot seats can help us reach:

- room occupancy requirements
- rule/setup menu progression
- start gating

But seat fillers alone will **not** validate:

- live in-game simulation
- settlement
- winner/loser result handling
- return-to-room sequencing

Those need a proper packet/state model even if the bots never move.

## Ranked Implementation Plan

### Priority 1: Finish the exact room query semantics

Goal:

- eliminate popup flicker / UI freeze in room menu and create-room follow-up

Why first:

- everything after this depends on stable room state

Tasks:

1. instrument exact response size/order for Bomberman room queries
2. align `REQ_QRY_ROOMS`, `REQ_QRY_USERS`, and `REQ_QRY_ROOM_ATTR` with client expectations
3. compare room query callback sequence against client string transitions

Exit criteria:

- open room menu without flicker
- create room without freeze
- enter room repeatedly without instability

### Priority 2: Build Bomberman’s rule/start state machine

Goal:

- progress from room entry into `Setup rule`, ready flow, and clean `Start`

Tasks:

1. infer Bomberman’s rule owner / ack / ready / start ordering from static anchors
2. model state transitions explicitly in Kage
3. use Outtrigger and Propeller only as structural guidance

Exit criteria:

- `Setup rule` menu no longer crashes
- room can reach the pre-match start gate consistently

### Priority 3: Add deterministic seat-fill testing support

Goal:

- let one human progress through pre-match flow without needing another console

Tasks:

1. keep bots passive and explicit-only
2. make bot readiness controllable from the admin UI
3. do not fake in-game simulation yet

Exit criteria:

- single-user room can satisfy pre-match occupancy/ready checks

### Priority 4: Map in-game online protocol

Goal:

- understand battle packets, settlement, win/lose, and return-to-room behavior

Tasks:

1. capture new live logs once pre-match start works
2. correlate battle strings with `CNetworkClient` / `CNetworkServer` regions
3. model settle/end/result packet flow

Exit criteria:

- one complete match can start and return cleanly to the room or results flow

### Priority 5: Finish disconnect and recovery paths

Goal:

- match original behavior for disconnects, kicks, and player-loss cases

Tasks:

1. implement server-side handling for player loss / insufficient players
2. verify `Returned to the game room due to lack of players.`
3. verify kick/disconnect messaging paths

Exit criteria:

- no hard crash when a player leaves or the match cannot continue

## Test Strategy

When hardware testing resumes, collect data in this order:

1. login to lobby
2. open room menu without creating a room
3. create room
4. sit in room and chat
5. open `Setup rule`
6. confirm rules / ready state
7. trigger start
8. observe in-game sync and end-of-match behavior

For each failure, capture:

- `D:\kageserver\logs\kageserver.log`
- newest `D:\kageserver\data\*.dmp`
- DreamPi bridge output
- exact on-screen text shown by the client

## Confidence Summary

### High confidence

- hostname / DNS bootstrap path
- Kage login / lobby / room lifecycle names
- existence of explicit room query and callback flow
- existence of explicit rule/start flow
- existence of explicit settle/end/result flow

### Medium confidence

- exact ordering of all room follow-up queries
- exact rule/start handshake details
- how much of battle-time sync lives in `CNetworkClient` vs `CNetworkServer`

### Lower confidence until live validation

- exact packet shapes for every rule/start/result transition
- whether a passive seat filler is enough to satisfy Bomberman’s full pre-match logic
- full win/lose and return-to-room semantics

## Bottom Line

We are no longer guessing in the dark.

The binary already gives us:

- the client state names
- the major code regions
- the key callback anchors
- the battle lifecycle vocabulary

So the path forward is now:

1. stabilize room-query semantics
2. implement Bomberman’s own rule/start state machine
3. use passive test seats only to cross the pre-match gate
4. then map in-game settlement and result handling

That is a credible, data-driven plan. It is strong enough to guide the next
implementation steps with very little guesswork, but it is still honest about the
small number of places where live verification is required.

## 2026-04-16 Room-Member Update Findings

Fresh hardware evidence plus new decompilation narrowed the live room-member
problem:

- Kage already emits a synthetic bot add packet and the Dreamcast does show the
  toast `The number of players in this room has changed.`
- the bot still does not appear in `Room Members`
- outbound room dumps prove the server-side bot add is leaving Kage
- inbound room dumps show the client is not issuing a fresh `REQ_QRY_USERS`
  after that bot add

The newer client-side evidence explains why that can happen:

- `0x8C096928` is the active in-room UI/state handler and it treats the room
  count-change toast separately from queued room-user object updates
- `0x8C0E6896`, `0x8C0E6900`, and `0x8C0E6926` form a room-object callback
  family distinct from the room-user callback family
- `0x8C0E6926` updates room object fields by tag and includes a separate integer
  field consistent with room user count

Server implication:

1. Bomberman likely wants both:
   - a room-object-side user-count update
   - a room-user-side add/update callback
2. Updating only the count path is enough to show the toast, but not enough to
   materialize a visible room member
3. Updating only a synthetic join packet is also not enough if the room-object
   user-count callback never fires

Translation status:

- Kage now emits a `REQ_CHG_ROOM_ATTR` / `USER` count update when admin bot
  seats change
- this is the first data-driven server change tied directly to the recovered
  room-object callback family
- if the bot still does not appear after that patch, the next translation target
  is the exact typed room-user add/update callback record rather than another
  generic room packet tweak

## 2026-04-17 Room-Row / Start-Button Findings

Fresh reverse-engineering tightened the client-side reason the owner can still
see a grey `Start Battle` button even when Kage says the room is ready.

New confirmed handlers:

- `0x8C0E1E54` copies or clears two distinct `0x3c`-byte text buffers inside a
  roster-row UI object
- `0x8C0E1E14` writes a small row-state field at `+0x58`
- `0x8C0F4F38` stores a per-slot UI flag and notifies a child presenter when any
  slot-pair is active
- `0x8C0F5A1A` is the direct start-enable setter reached from the final room-wide
  readiness check in `0x8C096928`

Combined with the already recovered `0x8C096928` room UI logic, this gives a
stronger client-side picture:

1. Occupied room slots are counted separately from non-empty rendered names.
2. The owner-side start toggle is only enabled after the room UI believes all
   occupied slots have fully materialized visible row state.
3. Therefore:
   - Kage can legitimately reach `ready_to_start`, `accepted_rules=2`, and
     `can_start=1`
   - while the Dreamcast still keeps `Start Battle` grey if one participant row
     is missing its text/state object materialization

Server implication:

- the next safe Kage change should target the missing room-row materialization
  contract for the pre-existing occupant on the joiner
- further changes to server-side start gating would be guessy at this point,
  because the binary now shows the client has an additional local UI gate on top
  of room acceptance math

Additional 2026-04-17 reverse-engineering now sharpens that target:

- the active room screen consumes queued records from `0x8C0E2D62`
- event type `4` is handled by `0x8C0F5370`, which updates the room UI widget at
  `+0x3c` and marks the room screen dirty
- the room screen also uses a tight set of presenter methods at:
  - `0x8C0F57FC`
  - `0x8C0F58D4`
  - `0x8C0F58EA`
  - `0x8C0F58F8`
  - `0x8C0F58C6`
  - `0x8C0F583C`
  - `0x8C0F5A38`

This raises confidence that the remaining issue is one missing or malformed
queued room-user update class, not a broad room snapshot failure.

Later 2026-04-17 reverse-engineering tightened that further:

- `0x8C0F5370` is not a generic notice helper for queued event type `4`
  - it copies a fixed-width `10`-byte field from `payload + 0x0b`
  - trims trailing spaces
  - and uses the caller-provided slot index, with `-1` falling back to `0x10`
- `0x8C0991E4` is a concrete slot-table builder
  - it writes directly into the `0x22EC` table used by `0x8C096928`
  - assigns slot states `1`, `2`, and `3`
  - then immediately walks the slot table and resolves room-user data back into
    row-facing state

This materially improves the server-side interpretation:

1. The blank `FARKUS` row on the joiner is very likely not a pure payload-shape
   problem anymore.
2. It is strongly consistent with a join-order problem:
   - Kage currently sends pre-existing occupant join/prop/status/snapshot data
     to the joiner before `udp8`
   - but the client's row-materialization pass depends on the slot table that
     `udp8` builds
3. The safest next Kage translation target is therefore:
   - move the joiner's `udp8` / slot-table init earlier in the join sequence
   - then replay the pre-existing occupant row events after slot-table setup

This is a narrower and more evidence-backed next step than changing ready/start
gating again.

Follow-up live evidence on 2026-04-17 showed that `udp8` reordering alone was
not sufficient:

- Kage can now reach `ready_to_start` with `accepted_rules=2` and `can_start=1`
- client 2 can still render the pre-existing occupant as a blank row
- the owner's `Start Battle` button can still remain grey

The newest packet-level asymmetry now in scope is:

- existing occupants receive Bomberman's `udpA` roster update during room join
- the joiner previously did not receive `udpA`

That made the next narrow server translation:

1. keep the `udp8`-first ordering
2. also send `udpA` to the joiner during the direct room-entry sequence

This is now the safest evidence-backed follow-up because it mirrors the packet
family already present on the occupant side, where the new player name renders
correctly.

Follow-up live validation confirmed that `udpA` to the joiner fixed the blank
pre-existing-occupant row:

- client 2 now shows `FARKUS` correctly in `Room Members`

The next remaining live blocker is narrower:

- `Start Battle` can still remain grey
- the remote room-member indicator can still look dim/grey after rule accept
- Kage nevertheless reaches:
  - `ready_to_start`
  - `accepted_rules=2`
  - `can_start=1`

Fresh packet evidence on that run showed:

- Bomberman's compact rule-sync packets (`0x0b` / `0x0c` family) are already
  relayed across the room
- but no `REQ_CHG_USER_STATUS` traffic happens when a player accepts rules

Current live translation therefore targets the client-visible per-user state:

1. reset room user status to `0` when rules are reconfigured
2. mark the configuring owner as status `1`
3. mark an accepting player as status `1`
4. relay room `REQ_CHG_USER_STATUS` after those transitions

This is the safest next step because the client has explicit
`ChangeUserStatusCallback` wrappers, and the remaining symptom is visibly tied
to per-user ready/presentation state rather than accepted-rule counting.

Follow-up live work on 2026-04-17 moved that boundary again:

- changing accepted/ready status from `1` to `3` did not unlock `Start Battle`
- later room runs did reach the clients with lock set:
  - outbound dumps confirmed `STAT=0x40000001`
- Kage still reached:
  - `ready_to_start`
  - `accepted_rules=2`
  - `can_start=1`

So the strongest remaining blocker is no longer:

- missing lock bit
- missing name materialization
- missing compact `0x0b` / `0x0c` relay
- or raw accepted-rule counting

The next concrete binary/server correlation is now:

- `0x8C0991E4`, the client slot-table builder used by the in-room UI, treats the
  per-player count in the Bomberman roster update as guest count and then adds
  `1` internally
- Kage's `BMRoom::sendUdpPacketA()` had still been sending total slot count
  rather than guest count
- for one-slot human players, Kage was sending `1` where the client likely
  expects `0`

That is now corrected in the live server:

1. `udpA` human count field now sends `slots - 1`
2. single-slot bots send `0`
3. no other room-join, rule, or login path changed in that pass

This is the current highest-confidence live experiment because it directly
targets the client's occupied-slot accounting, which is one of the final inputs
to the owner-side `Start Battle` enable check in `0x8C096928`.

Separately, reverse engineering also recovered a new pre-match packet family:

- `0x8C0981C8` is a real `REQ_GAME_DATA` subtype `9` emitter with a 9-byte
  payload
- older Kage comments labeling subtype `9` as unused are no longer safe
- subtype `9` has not yet been observed in the current live room dumps, but it
  is now a real candidate for the next pre-match/start decode frontier if the
  `udpA` guest-count correction is not sufficient

## 2026-04-17 Stable Pre-Match Wire Boundary

Fresh parsing of the restored stable room-ready dump pair now confirms:

- current inbound `REQ_GAME_DATA` on the working room path only includes:
  - subtype `7` with 9-byte payload
  - subtype `0x0b`
  - subtype `0x0c`
- subtype `9` has not yet appeared in the latest stable room-ready hardware run

This matters because the binary now proves both:

- `0x8C0981C8` emits subtype `9`
- `0x8C098894` emits subtype `4`

So the current interpretation is:

1. subtype `4` and subtype `9` are real later-stage pre-match families
2. the current blocker is likely before or at the branch that would emit them
3. Kage should support them passively before the client reaches them

Live server translation now deployed:

- `D:\kageserver\bomberman.cpp`
- subtype `4` now acks and relays exact payload
- subtype `9` now acks and relays exact payload

This is intentionally low risk:

- no change to room join sequencing
- no change to `udp8`
- no change to `udpA`
- no change to accepted-rule counting
- no change to current start gating

Next reverse target remains:

- determine what client-side event/queue transition should occur after the
  stable `7 / 0x0b / 0x0c` phase and before successful battle transition

## 2026-04-20 Owner-Side Room Lock Self-Sync Test

Fresh live logs reproduced the same narrowed failure:

- both real Dreamcasts logged into DCNet and joined room `test`
- both room-member names rendered
- `FARKUS` set rules
- `FARKUS2` accepted rules
- Kage reached `ready_to_start`, `accepted_rules=2`, and `can_start=1`
- the owner still saw `Start Battle` grey, and no start command reached Kage

That rules out another server-side rule-counting fix for this pass. The next
packet-level asymmetry is in the room-lock update path:

- latest logs show owner `FARKUS` sends `REQ_CHG_ROOM_ATTR STAT` after rules
- prior matching outbound dumps show Kage sends live
  `REQ_CHG_ROOM_ATTR STAT=0x40000001` to the non-requesting console
- the requesting owner only receives `RSP_OK` with the room id, `STAT`, and value
- `0x8C096928` gates Start Battle on the local room object's locked bit
  (`0x40000000`) plus rendered-name/occupied-slot counts

Current live patch:

- `D:\kageserver\model.cpp`
  - Bomberman `REQ_CHG_ROOM_ATTR STAT` now returns the original OK and appends an
    explicit live `REQ_CHG_ROOM_ATTR STAT` self-sync for the requester
  - the existing relay to the other console is unchanged
  - log output now includes the exact `STAT` value
- `D:\kageserver\bomberman.cpp`
  - added diagnostics for the observed Bomberman room `REQ_CHAT` command `7`
    size `4` packet so the next run can prove whether the client reaches that
    later pre-match branch

No room join ordering, `udp8`, `udpA`, bot, login, or rule-acceptance behavior
changed in this pass.

## 2026-04-20 Aggregate Ping Occupancy Mask Test

Result of the owner-side room-lock self-sync test:

- the live log proved the self-sync fired with `STAT=40000001`
- Kage still reached `ready_to_start`, `accepted_rules=2`, and `can_start=1`
- owner `Start Battle` still remained grey
- no start packet reached Kage

New binary evidence:

- `pass84_udp_room_update_handlers\8c099524_FUN_8c099524.c` confirms UDP `0x0a`
  is the roster/slot-table update builder
- `pass84_udp_room_update_handlers\8c096928_FUN_8c096928.c` confirms the final
  Start Battle UI gate requires:
  - non-null room UI state at `+0x00e0`
  - room lock bit `0x40000000`
  - rendered member-name count greater than one
  - rendered member-name count equal to occupied bits from `+0x00e4`

New dump evidence:

- prior nonzero dump pairs show Bomberman ping packets carrying a per-client slot
  bit:
  - `.246` sends `01`
  - `.245` sends `02`
- Kage was echoing those single-client masks back unchanged
- for a two-human one-slot room, the room-wide occupied mask should be `03`

Implemented translation:

- added `BMRoom::getOccupiedSlotMask()`
- Bomberman ping replies now return the aggregate room slot mask instead of the
  sender's local mask
- first changed ping per player logs as `ping slot mask in=.. out=..`
- no room join, `udp8`, `udpA`, rule, or lock packet shape changed

Next validation:

- after both clients join the room, confirm logs show:
  - `FARKUS: ping slot mask in=01 out=03`
  - `FARKUS2: ping slot mask in=02 out=03`
- after both clients accept rules, check whether:
  - room-member dots become consistent
  - owner `Start Battle` becomes selectable
  - `START BATTLE!` appears in Kage logs when selected

## 2026-04-20 Keyholder / Room-Master Sync Test

Result of the aggregate ping occupancy test:

- the live log proved the patch fired:
  - `FARKUS2: ping slot mask in=02 out=03`
  - `FARKUS: ping slot mask in=01 out=03`
- Kage still reached `ready_to_start`, `accepted_rules=2`, and `can_start=1`
- owner `Start Battle` still remained grey
- no start packet reached Kage

This rules out another server-side accepted-rule counter change, and it also
rules out the aggregate ping mask as a complete fix by itself.

New binary evidence:

- `pass88_keyholder_ui_methods\8c099cc4_FUN_8c099cc4.c` confirms
  `ReciveNewKeyHolderInfo()` consumes a packet with:
  - owner/keyholder id at payload offset `+4`
  - owner/keyholder position at payload offset `+8`
- when the active room UI object exists, that handler compares the received
  owner id to the local player id
- if the local player is the owner, it calls `0x8C0F4E64(true)`
- `pass89_keyholder_ui_listing\8c0f4e50_8c0f4f00.lst` confirms
  `0x8C0F4E64` toggles bit `0x4` at UI object offset `+0x00a8`

Implemented translation:

- Kage already had the Bomberman `udp 0x0e` keyholder packet for owner changes,
  but it was only sent after a leave/timeout changed ownership
- Kage now sends that same keyholder sync after the joining Dreamcast ACKs the
  `udp8` room-init packet and all real human occupants are marked joined
- this avoids changing login, room snapshots, `udp8`, `udpA`, rules, room lock,
  or ping packet shape
- new target logs:
  - `room join init acked by FARKUS2 [1002] (2/2 joined)`
  - `keyholder sync (room_join_complete) -> FARKUS [1001] owner=FARKUS [1001] pos=0`
  - `keyholder sync (room_join_complete) -> FARKUS2 [1002] owner=FARKUS [1001] pos=0`

Next validation:

- fresh dial after the Kage restart
- create room `test`
- join with the second Dreamcast
- confirm both names still render and chat still works
- set/accept rules and lock the room
- check whether owner `Start Battle` becomes selectable
- if still grey, preserve this patch only if no regression occurs and continue
  tracing the remaining `0x8C096928` false input rather than changing roster
  packet shapes

## 2026-04-20 Server-Side Rule Blob Sync

Result of the keyholder sync test:

- room join and chat stayed stable
- keyholder sync fired for both clients
- aggregate ping mask still returned `03`
- Kage reached `ready_to_start`, `accepted_rules=2`, and `can_start=1`
- owner `Start Battle` still remained grey

New binary evidence:

- the incoming Bomberman command dispatcher around `0x8C093838` maps command
  `0x0B` to the branch at `0x8C093DC6`
- that branch:
  - optionally displays the "room master set new rules" style message through
    the room UI presenter
  - copies exactly 9 bytes from packet payload `+4` into state `+0x245c`
  - writes `1` to state `+0x00e0`
- the final Start Battle gate at `0x8C096928` requires `+0x00e0 != 0`
- command `0x0C` does not consume the compact 4-byte client packet shape on the
  receive side; it calls `0x8C0999B4`, which parses a larger structured
  count/map payload

New dump evidence:

- latest outbound dump before this patch showed:
  - Kage sent `cmd=7` with the 9-byte rule blob
  - Kage relayed compact client `cmd=0x0b` with only 4 bytes
  - Kage relayed compact client `cmd=0x0c` with only 4 bytes
- this is a directionality bug:
  - client-to-server compact `0x0b` / `0x0c` packets are not the same as
    server-to-client `0x0b` / `0x0c` payloads
  - relaying those compact packets can corrupt the client rule blob and leave
    the `+0x00e0` Start Battle input false or stale

Implemented translation:

- when the owner sends `REQ_GAME_DATA` subtype `7` to configure rules, Kage
  still stores the submitted 9-byte rules and updates server-side acceptance
  state
- Kage now broadcasts server-to-client Bomberman `udp 0x0b` to every room player,
  including the owner, with:
  - command `0x0b`
  - the rule word from the owner packet
  - the stored 9-byte rule blob
- Kage no longer relays compact client-origin `0x0b` / `0x0c` packets to peers
  as raw `REQ_CHAT` payloads
- no login, room join, `udp8`, `udpA`, room lock, keyholder, or ping packet shape
  changed

Next validation:

- create and join a two-Dreamcast room
- set rules from the owner
- confirm logs show two `rule blob sync (rules_configured)` lines
- confirm the second client's `Review Rules` display is no longer garbled
- accept rules from the second client
- lock the room if needed
- check whether owner `Start Battle` becomes selectable and whether Kage logs
  `START BATTLE!` when selected

## 2026-04-20 Server-Side Occupied Slot Mask Sync

Result after the server-side rule-blob patch:

- rules are no longer garbled on hardware
- owner `Start Battle` still remains grey
- no start packet reaches Kage, so the blocker is still inside the Dreamcast UI
  enable gate before a start request is emitted

New binary evidence:

- the final in-room gate at `0x8C096928` counts rendered member names and
  occupied bits from client state `+0x00e4`
- the earlier aggregate ping response patch was not sufficient because command
  `0x1c` writes the liveness table at `+0x270 + slot * 8`, not `+0x00e4`
- the server-to-client command dispatcher maps Bomberman command `0x11` to
  `0x8C093D5C`
- that command calls the endian conversion helper on packet payload `+4`, then
  stores the resulting 32-bit value directly into `+0x00e4`
- the latest outbound dump before this patch contained no server-side
  `cmd=0x11` records

Implemented translation:

- Kage now sends Bomberman `REQ_CHAT` / RUDP command `0x11`
- payload shape is `command 0x11`, command size `4`, reserved word `0`, then
  the aggregate occupied slot mask
- for the current two-Dreamcast one-slot test, the expected mask is `03`
- Kage broadcasts this occupied-slot mask after:
  - room join completes for all human occupants
  - owner configures rules
  - a player accepts rules
- unchanged in this patch:
  - login/bootstrap
  - room create/join ordering
  - `udp8`
  - `udpA`
  - rule blob directionality
  - room lock self-sync
  - keyholder sync
  - bot behavior

Next validation:

- start the patched Kage binary, not only the web console
- create and join a two-Dreamcast room
- confirm logs show occupied-slot syncs with `mask=03` to both players
- after owner rule setup, guest rule accept, and room lock, check whether owner
  `Start Battle` becomes selectable
- if still grey, the next step is not to guess a new packet; first prove from
  the outbound dump that `cmd=0x11` was delivered in the expected order

## 2026-04-20 Start Battle Click Reached / Server Transition Patch

Result after the occupied-slot mask sync patch:

- the owner was finally able to select `Start Battle`
- Kage logged the owner request:
  - `START BATTLE!`
- Kage had already logged:
  - room join complete
  - occupied slot mask syncs with `mask=03`
  - rule blob syncs
  - `ready_to_start (2/2 accepted)`
- the failure moved to the post-click transition:
  - Kage sent a reliable packet to the guest
  - the guest stopped ACKing it
  - the guest timed out
  - the Dreamcast UI froze instead of transitioning

New binary evidence:

- server-to-client Bomberman command `0x0a` is not battle start
- command `0x0a` dispatches to the roster/slot-table update builder
  `0x8C099524`
- Kage's old start path was relaying the client-origin start request `0x0a`
  directly to the peer as server `0x0a`
- this explains the freeze: the guest received a malformed roster/slot-table
  packet exactly when it expected the game transition
- server-to-client command `0x13` dispatches to `0x8C093BBC`
- that branch tears down the room UI, sets room/game state `0x0b`, calls the
  `PlayGame` setup path at `0x8C09A3BC`, and stores payload `+4` as a start
  token

Implemented translation:

- preserve the owner client packet `0x0a` as the Start Battle request
- ACK the owner only after validating the room can start and the requester is
  the room owner
- remove the old raw `0x0a` peer relay
- broadcast server-to-client command `0x13` to all room players
- log the owner start word/payload/size and every outbound start-transition
  packet with its intended recipient
- unchanged:
  - login/bootstrap
  - room create/join sequence
  - `udp8`
  - `udpA`
  - rule blob sync
  - occupied slot mask sync
  - keyholder sync
  - bot behavior

Next validation:

- create and join a two-Dreamcast room
- set/accept rules until `Start Battle` is selectable
- select `Start Battle`
- expected logs:
  - `START BATTLE! word=... payload=... size=...`
  - `server start transition (start_battle) -> FARKUS ...`
  - `server start transition (start_battle) -> FARKUS2 ...`
- if both clients ACK command `0x13` but the game still does not transition,
  trace and implement the next binary-backed packet: server command `0x14`
  Game Time Info / start-frame sync
- if the guest still fails to ACK command `0x13`, decode the exact outbound
  packet shape before making another server change

## 2026-04-20 Board Transition Reached / Game-Data Relay Patch

Result after the server command `0x13` transition patch:

- `Start Battle` worked
- both clients ACKed the start transition
- both clients moved from the room UI to the game board
- both clients then froze before board actors/sprites populated

Fresh log evidence:

- Kage reached:
  - `start relay acked by FARKUS2`
  - `all human players acked start relay`
- immediately afterward, both clients sent game-phase packets
- Kage logged unhandled `REQ_GAME_DATA` commands:
  - `0x0d`
  - `0x05`
  - `0x1a`
  - `0x1b`
  - `0x0e`
- the `0x1a` and `0x1b` packets carried 128-byte map-info/map-block payloads
- because these fell through generic handling, Kage ACKed but did not relay
  the board/map payloads to the other Dreamcast

Implemented translation:

- added explicit Bomberman handling for client `REQ_GAME_DATA` commands:
  - `0x05`
  - `0x0d`
  - `0x0e`
  - `0x1a`
  - `0x1b`
- Kage now ACKs the sender with `REQ_NOP`
- Kage relays the exact original payload to the other room players as
  `REQ_GAME_DATA`
- Kage sets the relay flag and preserves the sender player id
- unchanged:
  - login/bootstrap
  - DreamPi bridge
  - room create/join
  - room roster materialization
  - rule blob sync
  - occupied slot mask sync
  - start transition command `0x13`
  - bots

Next validation:

- start two Dreamcasts and reach `Start Battle`
- after board transition, confirm fresh logs show:
  - `game data relay cmd=0d`
  - `game data relay cmd=05`
  - `game data relay cmd=1a`
  - `game data relay cmd=1b`
  - `game data relay cmd=0e`
- confirm those commands no longer appear as `Unhandled udp 11 command`
- if the board still freezes after this, do not change room packets; inspect
  whether server command `0x14` / Game Time Info must be sent after all clients
  ACK `0x13`

## 2026-04-20 Proactive Post-Start Decompile Pass

Question being answered:

- before the next hardware test, should we proactively decompile beyond the
  current patch to understand the gameplay flow?

Answer:

- yes, for the complete gameplay roadmap
- no, it should not block the next test of the current build, because the
  current build directly targets the exact unhandled packets emitted in the last
  live board-freeze log

New binary evidence:

- `pass95_post_start_gameplay` forced the adjacent post-start server command
  handlers:
  - `0x8C093B70`
  - `0x8C093B10`
  - `0x8C093A74`
  - `0x8C093A64`
  - `0x8C093A38`
  - `0x8C09392E`
  - `0x8C099E92`
  - `0x8C09A3BC`
- command `0x14` dispatches through `0x8C093B70` into `0x8C099E92`
- `0x8C099E92` is the named Game Time Info receiver:
  - packet payload `+4`: start frame
  - packet payload `+8`: end frame
  - packet payload `+0x0c`: current/common frame
  - it logs `Game Time Info. Now CommonFrame= ...`
  - it logs `Start_Frame %ld. End_Frame %ld.`
  - it sets game-time state flags and stores the common frame into the active
    play/game state
- command `0x18` also routes through the same Game Time Info helper family, so
  there may be a second later timing update after the initial `0x14`
- command `0x16` maps to `0x8C093A74`, reads payload `+4`, and logs
  `--- Svr Settled Recv Dead Bits %ld`
- command `0x19` maps to `0x8C09392E` / `0x8C0939A0`, walks the 8-slot table,
  reads payload `+4`, and logs `--- Svr Completed ed Recv Dead Bits %ld`

Decision tree for the next test:

- if the board populates after the current `REQ_GAME_DATA` relay patch, continue
  capturing live gameplay packets before implementing settle/end paths
- if the board still freezes but logs show the `05/0d/0e/1a/1b` relays firing,
  implement the next narrow packet:
  - server-to-client Bomberman command `0x14`
  - 12-byte payload
  - three 32-bit frame values: start frame, end frame, common frame
- do not change login, DreamPi, room join, rule, roster, or start-transition
  packets for that failure mode

Longer gameplay roadmap now split by confidence:

- high confidence:
  - login/bootstrap
  - lobby and room entry
  - two-client room chat
  - rule blob directionality
  - occupied-slot mask gate
  - server command `0x13` room-to-board transition
  - client `REQ_GAME_DATA` relay families observed live:
    - `0x05`
    - `0x0d`
    - `0x0e`
    - `0x1a`
    - `0x1b`
- next confidence target:
  - command `0x14` Game Time Info / frame sync
- later confidence targets:
  - live object/sprite movement replication
  - brick/object/power-up state changes
  - death/alive bit state
  - settle/completed dead-bit commands `0x16` and `0x19`
  - win/lose/result and return-to-room

## 2026-04-20 Fresh Board-Freeze Test / Game Time Sync Patch

Fresh test:

- dump pair:
  - `D:\kageserver\data\20_18-01-20_BM_test.dmp`
  - `D:\kageserver\data\20_18-01-20_BM_test_out.dmp`
- both clients still reached `Start Battle`
- both clients ACKed the server `0x13` start transition
- current `REQ_GAME_DATA` relay patch fired successfully:
  - `cmd=0x0d`
  - `cmd=0x05`
  - `cmd=0x1a`
  - `cmd=0x1b`
  - `cmd=0x0e`
- the old `Unhandled udp 11 command` messages did not recur in the fresh run
- after the `0x0e` relays, no further meaningful game packets appeared and both
  clients timed out
- outbound dump parsing confirmed the missing server-side boundary:
  - no Bomberman command `0x14` Game Time Info packet was sent before timeout

Implemented translation:

- `D:\kageserver\bomberman.cpp`
  - after `all human players acked start relay`, Kage now broadcasts command
    `0x14`
  - command is sent as server-to-client Bomberman `REQ_CHAT` / RUDP
  - payload shape:
    - command `0x14`
    - size `12`
    - word `0`
    - start frame `0`
    - end frame `10800`
    - common frame `0`
- `D:\kageserver\bomberman.h`
  - added `sendGameTimeInfoTo`
  - added `broadcastGameTimeInfo`

Why this is the next safe patch:

- it is directly backed by the prior decompiled `0x8C099E92` Game Time Info
  receiver
- it only fires after the already-working `0x13` transition ACK boundary
- it does not alter login, room join, room roster, rules, occupied-slot sync,
  or the existing client `REQ_GAME_DATA` relay code

Next validation:

- expected new log lines:
  - `game time sync (start_relay_acked) -> FARKUS ... start=0 end=10800 common=0`
  - `game time sync (start_relay_acked) -> FARKUS2 ... start=0 end=10800 common=0`
- if sprites populate, capture the next gameplay packet family before changing
  settle/end logic
- if the board still freezes after `0x14`, compare the new inbound/outbound dump
  against `20_18-01-20` and inspect whether clients ACK `0x14`

## 2026-04-21 Game Time Ordering Correction

Fresh test:

- dump pair:
  - `D:\kageserver\data\21_06-49-50_BM_t.dmp`
  - `D:\kageserver\data\21_06-49-50_BM_t_out.dmp`
- user-visible behavior:
  - after pressing `Start Battle`, both consoles showed the disconnect popup
    before the board fully loaded
  - the board still loaded in the background and then became unresponsive
- log/dump evidence:
  - both clients ACKed server command `0x13`
  - Kage sent server command `0x14` as `REQ_CHAT full=280c`
  - both clients ACKed `0x14`
  - the previous run without `0x14` reached `0x1a` / `0x1b` map blocks and
    final `0x0e`
  - this run with immediate `0x14` stopped before any `0x1a` / `0x1b` packets
  - only `0x0d`, repeated `0x04`, and repeated `0x05` appeared before timeout

Data-driven conclusion:

- command `0x14` is real and ACKed, but immediate post-`0x13` timing is wrong.
- The next safe translation is to preserve the proven map exchange first, then
  send Game Time Info only after both real clients emit post-map marker `0x0e`.

Implemented correction:

- removed the immediate `0x14` broadcast from the `all human players ACKed 0x13`
  path
- added per-player `postMapMarkerSeen`
- manually sends each `0x0e` ACK and peer relay before evaluating the Game Time
  gate
- broadcasts `0x14` as `post_map_exchange` after all real room players have sent
  `0x0e`
- frame values remain unchanged for this validation:
  - start frame `0`
  - end frame `10800`
  - common frame `0`

Next validation:

- confirm room/rules/start remain stable
- confirm the map-block phase returns:
  - `game data relay cmd=1a`
  - `game data relay cmd=1b`
  - `game data relay cmd=0e`
- confirm the new gate fires only after both clients:
  - `post-map marker from FARKUS ...`
  - `post-map marker from FARKUS2 ...`
  - `game time sync (post_map_exchange) -> ...`

## 2026-04-21 Board Sprites Reached / Live State Relay

Fresh test:

- dump pair:
  - `D:\kageserver\data\21_08-17-03_BM_t.dmp`
  - `D:\kageserver\data\21_08-17-03_BM_t_out.dmp`
- user-visible behavior:
  - board loaded
  - two player sprites appeared
  - then both consoles showed the line-disconnected popup
- log evidence:
  - `game data relay cmd=1a`
  - `game data relay cmd=1b`
  - `game data relay cmd=0e`
  - `post-map marker ... (2/2)`
  - `game time sync (post_map_exchange)`
  - immediately after that, Kage logged repeated unhandled `REQ_GAME_DATA`
    commands:
    - command `0x01`, `full=02c8`, size `200`
    - command `0x02`, `full=04a4`, size `164`
    - command `0x03`, `full=063c`, size `60`
- dump evidence:
  - all three new commands appeared from both Dreamcasts
  - these are unreliable in-game state blocks, not room packets
  - Kage was not relaying them to the peer before timeout

Implemented translation:

- `D:\kageserver\bomberman.cpp`
  - added commands `0x01`, `0x02`, and `0x03` to the existing exact
    `REQ_GAME_DATA` gameplay relay path
  - preserves sender player id through `FLAG_RELAY`
  - preserves RUDP/unreliable shape based on the original packet flags
- unchanged:
  - login/bootstrap
  - DreamPi bridge behavior
  - room create/join
  - rule set/accept
  - occupied slot mask
  - server start transition `0x13`
  - map-block relay
  - post-map Game Time ordering

Next validation:

- expected new log lines after sprites appear:
  - `game data relay cmd=01 full=02c8`
  - `game data relay cmd=02 full=04a4`
  - `game data relay cmd=03 full=063c`
- the previous `Unhandled udp 11 command: 1/2/3` lines should disappear
- if a disconnect still happens, compare the next fresh dump for the first new
  unhandled or missing gameplay packet family after `0x01/0x02/0x03`

## 2026-04-21 Delayed Disconnect After Live-State Relay

Fresh test:

- dump pair:
  - `D:\kageserver\data\21_08-34-52_BM_t.dmp`
  - `D:\kageserver\data\21_08-34-52_BM_t_out.dmp`
- user-visible behavior:
  - game board loaded
  - both player sprites appeared
  - the line-disconnected popup appeared a few seconds later than the previous
    run
  - the game timer continued counting locally in the background
  - after the timer reached zero, no additional server-visible battle/settle
    flow occurred
- log/dump evidence:
  - start transition `0x13`, map exchange, post-map markers, and deferred
    `0x14` still happened in order
  - live-state `REQ_GAME_DATA 0x01`, `0x02`, and `0x03` were relayed rather
    than logged as unhandled
  - traffic then stopped entirely until the server timed out both players
  - outbound packets included pre-start `REQ_CHAT 0x1c` replies, but no
    post-start `0x1c` liveness updates
- binary evidence:
  - `0x8C093FDC` handles a distinct `cmd 0x1c` liveness table update
  - it updates `global + 0x270 + slot * 8` using payload value `+4` and mask
    byte `+8`
  - this is separate from the `0x01` / `0x02` / `0x03` live-state receive
    buffers

Implemented translation:

- after all players send post-map `0x0e`, Kage now sends:
  - deferred `0x14` Game Time Info
  - immediate `REQ_CHAT cmd 0x1c` in-game liveness sync
- Kage then repeats the same `0x1c` liveness sync once per second while the room
  remains in `InGame`
- payload:
  - command `0x1c`, size `4`
  - word `0`
  - value `0x10000000`
  - aggregate occupied slot mask, expected `03` for the two one-slot Dreamcasts
- unchanged:
  - login/bootstrap
  - DreamPi bridge behavior
  - room create/join
  - rule set/accept
  - Start Battle enable and transition
  - map block relay
  - post-map Game Time ordering
  - live-state `0x01` / `0x02` / `0x03` relay

Next validation:

- after `game time sync (post_map_exchange)`, logs should show:
  - `in-game liveness sync (post_map_exchange) -> FARKUS ... mask=03`
  - `in-game liveness sync (post_map_exchange) -> FARKUS2 ... mask=03`
  - repeated `in-game liveness sync (heartbeat) ... mask=03`
- if the line-disconnected popup still appears, capture the fresh dump and
  compare whether the clients ACK/consume `0x1c` and whether a new packet family
  appears after the current live-state burst

## 2026-04-21 Battle Stayed Alive, Bomb/End Paths Missing

Fresh test:

- dump pair:
  - `D:\kageserver\data\21_09-17-33_BM_t.dmp`
  - `D:\kageserver\data\21_09-17-33_BM_t_out.dmp`
- user-visible behavior:
  - board remained playable instead of disconnecting
  - both players could move
  - pressing A created a temporary yellow tile mark but did not commit a bomb
  - countdown reached zero, but the game never transitioned to settle/results
- data evidence:
  - after board start, both clients continuously sent `REQ_GAME_DATA` commands
    `0x01`, `0x02`, and `0x03`
  - Kage was still using the generic room relay for those packets, which sends
    to all room players except the sender
  - outbound dump contained no server `0x16`, `0x19`, or `0x15` after timer
    expiry
- binary evidence:
  - `0x8C0DDBE4` receives command `0x02` and parses 28 compact object records
    through `0x8C0DD698`
  - `0x8C0DDA44` and `0x8C0DDD64` receive companion live-state commands `0x01`
    and `0x03`
  - `0x8C093A74` consumes server command `0x16` settled dead bits
  - `0x8C09392E` consumes server command `0x19` completed/dead bits
  - `0x8C093B10` consumes server command `0x15` and advances the battle end
    state machine

Implemented translation:

- preserve existing login, room, rule, start, map, Game Time, and liveness
  shapes
- arm a server-side match-end timer after the post-map `0x14` gate, using the
  same 10800-frame duration sent to the clients
- at timer expiry, send each player one reliable ordered sequence:
  - command `0x16`, dead bits `0`
  - command `0x19`, completed bits `0`
  - command `0x15`

Follow-up correction:

- `21_10-04-34_BM_t` / `_out` proved sender-echo of live-state `0x01`,
  `0x02`, and `0x03` regressed the game: both clients stopped sending live
  traffic shortly after board start
- Kage now restores the last proven-good live relay shape:
  - `0x01`, `0x02`, and `0x03` are relayed only to peer room players
  - source player id is still preserved with `FLAG_RELAY`
- decoded `0x02` object records stayed constant during the prior A-press test,
  so bomb placement still needs the client input/request path mapped before
  Kage can generate a correct authoritative bomb object update
- Kage now suppresses peer relay of default/empty `0x02` object tables:
  - records matching `00000000` or `00001000` across the 28-entry object table
    are treated as non-authoritative empty/default state
  - those packets are ACKed but not relayed
  - any non-default `0x02` object table still relays normally

Second follow-up correction from `21_12-31-15_BM_t` / `_out`:

- the latest long-running test proved that the suppression was too broad:
  - inbound contained `1797` command `0x02` packets
  - decoded object records were still all default/empty, so no committed bomb
    object was present
  - outbound contained `0` command `0x02` packets, starving the client-side
    `0x02` receive lane entirely
- Kage now relays `0x02` peer-only again, matching the last proven
  non-regressing live-state relay shape for `0x01` / `0x02` / `0x03`
- Kage keeps logging whether each relayed `0x02` object table is default or
  non-default so the next A-button test can prove whether a real object delta
  appears
- the same outbound dump also proved that the timer-end packet bundled three
  reliable commands incorrectly:
  - command `0x16` had the reliable sequence
  - following `0x19` and `0x15` chunks had sequence `0`
  - clients never ACKed the first chunk, so the battle-end state-machine
    command `0x15` was blocked behind it
- the following test `21_13-13-50_BM_t` / `_out` disproved the
  standalone-`0x15` shortcut:
  - board and live traffic stayed active until the 10800-frame timer expired
  - Kage sent standalone reliable command `0x15`
  - neither client ACKed it; the packet failed after four retries and both
    clients timed out
  - inbound `0x02` object tables still contained no non-default committed bomb
    object while A press produced only the local yellow mark
- Kage now sends the battle-end family as separate ACK-stepped reliable packets:
  - command `0x16`, value `0`, settled dead bits
  - after ACK, command `0x19`, value `0`, completed/dead bits
  - after ACK, command `0x15`, no payload, final state-machine advance
- Kage stops the in-game `0x1c` heartbeat before starting that end sequence so
  the test isolates the battle-end ACK path

Third follow-up correction from `21_13-49-06_BM_t` / `_out`:

- the narrow `cmd=02` sender-echo test did not produce a bomb:
  - outbound `cmd=02` doubled because Kage sent both peer relay and self echo
  - inbound object tables remained default-only
  - FARKUS2 stopped sending live traffic early and timed out before the
    10800-frame match timer expired
- Kage now removes the `cmd=02` sender echo and restores the stable peer-only
  live-state shape for `0x01`, `0x02`, and `0x03`
- the ACK-stepped battle-end sequence remains in place, but the latest run did
  not reach timer expiry, so `0x16 -> 0x19 -> 0x15` still needs validation

Next validation:

- bomb test:
  - after the board is fully live, first use the admin console's `Drop Bomb
    Probe` button instead of spending a full test only on A-button behavior
  - this sends a manual, repeated `cmd=02` object-record probe from the selected
    player's last live cell with object state nibble `2`
  - confirm logs show `armed bomb object probe` and `bomb object probe ... sent`
  - confirm whether a bomb/panel object appears on either or both consoles
  - only after that result should the A-button/request path be bound to an
    authoritative object update; the latest dumps still show `0` non-default
    client-origin `cmd=02` object tables during A press
- end test:
  - let the timer reach zero
  - confirm logs show `match-end timer armed`
  - confirm logs show `battle state sync ... cmd=16`, then an ACK-driven
    `cmd=19`, then an ACK-driven `cmd=15`
  - confirm whether the client transitions to settle/results or emits a new
    post-end packet family

## 2026-04-21 Bomb Object Probe Before Next Hardware Test

Additional dump analysis across the three most relevant A-button captures found:

- `21_09-17-33_BM_t`: `4288` inbound `cmd=02` packets, `0` non-default object tables
- `21_13-13-50_BM_t`: `1797` inbound `cmd=02` packets, `0` non-default object tables
- `21_13-49-06_BM_t`: `358` inbound `cmd=02` packets, `0` non-default object tables

Fresh binary mapping from `pass125` through `pass132` shows:

- `0x8C075A78` applies the 28 compact object records from the live object lane
- object state/top-nibble `2` or `3` routes toward panel object placement
- `0x8C08D534` / `0x8C0906F4` are the nearby panel placement helpers tied to the
  already-on-panel assertion string

Current implementation:

- normal `0x01`, `0x02`, and `0x03` gameplay relay remains peer-only
- Kage now records latest compact player cell data from live gameplay packets
- the dashboard at `http://127.0.0.1:8765/` has a `Drop Bomb Probe` control
- the probe emits a repeated `cmd=02` packet with one compact object record set
  to state `2` at the selected player's last live cell
- this is deliberately a validation probe, not a claimed final bomb solution

Expected next-test interpretation:

- if the object appears, the state-2 object materialization hypothesis is
  validated and the next work should bind it to the real input/request path
- if the object does not appear, do not keep changing relay policy; decode the
  missing object-record fields or companion command before changing gameplay
  behavior again

Follow-up result:

- the first admin probe did not make a bomb/object appear
- logs and flushed outbound dump prove the probe did leave Kage:
  - outbound `21_16-57-44_BM_t_out` contained `90` non-default `cmd=02`
    probe records such as `04382000`
  - inbound `21_16-57-44_BM_t` still contained `0` non-default object tables
- this means state `2` alone is not the full object materialization contract
- decompile review of `0x8C075A78` explains why:
  - state `2/3` changes an already-compatible local object slot
  - state `0xF` is the branch that copies the incoming compact position into
    the local object and calls the panel placement path
- Kage now stages the manual admin probe:
  - send state `0xF` first for materialization
  - then send state `0x2` as a follow-up update
  - keep normal `0x01` / `0x02` / `0x03` live relay peer-only

Second follow-up result:

- the staged state `0xF -> 0x2` admin probe also did not make a bomb/object
  appear
- parsed dump evidence from `21_17-17-09_BM_t` / `_out`:
  - outbound contained repeated staged non-default `cmd=02` object records,
    including materialize records such as `0438f000` / `3578f000` and update
    records such as `04382000` / `35782000`
  - inbound object tables remained default-only
- conclusion:
  - stop treating manual `cmd=02` object-only probes as a proven bomb creation
    path
  - the next server experiment is constrained to the recovered `cmd=01`
    action/check-pad lane
- current implementation:
  - detect active non-empty `cmd=01` compact records in the 24-record lane
  - originally tested self-syncing that active `cmd=01` packet back to its
    source Dreamcast
  - keep `cmd=02` and `cmd=03` peer-only because earlier sender echoes
    regressed live gameplay
  - expected diagnostic line was `cmd=01 active check-pad self-sync ...`

Third follow-up result:

- the `cmd=01` self-sync test was falsified by `22_08-30-56_BM_t` / `_out`:
  - bombs still did not appear
  - FARKUS was the only client receiving active `cmd=01` self-sync packets
  - FARKUS stopped sending live `cmd=01/02/03` about 12 seconds after live
    gameplay began
  - FARKUS2 continued sending live traffic until the later timeout window
- movement evidence from the same dumps:
  - FARKUS movement records reached Kage and were relayed to FARKUS2
  - FARKUS2's own player record mostly remained stable at slot 1 (`35780000`)
  - if the next no-self-sync run still has invisible peer movement, the next
    binary-backed target is an aggregated server-owned live-state frame, not
    more sender echoing
- current implementation:
  - removed `cmd=01` self-sync behavior
  - active `cmd=01` compact records are logged as observed only
  - normal `cmd=01`, `cmd=02`, and `cmd=03` relay is peer-only again

Windows dashboard note:

- repeated PC process popups were traced to console subprocesses in
  `tools/gui_server.py`
- the dashboard now uses hidden process flags for Build/Repair, server start,
  externally managed Kage `tasklist` polling, and `taskkill`

## 2026-04-22 Stable No-Self-Sync Run And Aggregated Live Relay

Fresh hardware result:

- no line-disconnect popup appeared during the main in-game window
- both clients continued sending live gameplay traffic through the match timer
- opposite-console movement still did not render
- pressing A still produced only the temporary yellow marker, not a committed bomb

Dump pair:

- `D:\kageserver\data\22_08-44-01_BM_test.dmp`
- `D:\kageserver\data\22_08-44-01_BM_test_out.dmp`

Data evidence:

- inbound live command counts were symmetric and long-running:
  - `cmd=01`: `1799`
  - `cmd=02`: `1797`
  - `cmd=03`: `1797`
- outbound live command counts matched the inbound relay shape:
  - `cmd=01`: `1799`
  - `cmd=02`: `1797`
  - `cmd=03`: `1797`
- every raw inbound/outbound live-state packet still carried only one populated
  player slot:
  - FARKUS/player `1001` populated slot `0`, e.g. `04580000` / `04380000`
  - FARKUS2/player `1002` populated slot `1`, e.g. `31780000`
- active `cmd=01` action/check-pad records were observed and peer-relayed, but
  no non-default `cmd=02` object table appeared during A-button attempts
- the match timer reached the ACK-stepped end sequence; `0x16` and `0x19` were
  ACKed, while the final `0x15` still failed as a separate downstream issue
- user later reported that about 30-60 seconds after the clock reached zero,
  both consoles changed to a `Time Over!!` popup; this is a positive client-side
  end-state clue, but not a complete settle/results transition
- immediately after `0x19`, both clients sent reliable `REQ_GAME_DATA cmd=10`
  packets with payloads such as `20000800ba476610` / `20008000ba476610`
- Kage was treating `cmd=10` as unhandled, so the current build now ACKs that
  client battle-end signal without relaying it or mutating gameplay state

Binary mapping used for the current patch:

- `0x8C0DDA44` receives `cmd=01` and copies all eight compact player records,
  then the 24-entry 6-byte action/check-pad lane
- `0x8C0DDBE4` receives `cmd=02` and copies all eight compact player records
  plus 28 compact object records
- `0x8C0DDD64` receives `cmd=03` and copies the compact eight-slot player block
- `0x8C09AD3C` / `0x8C09AFE4` build outgoing `cmd=01` / `cmd=02` packets from
  full active game-state buffers, not from a single peer slot only

Current Kage translation:

- keep the proven stable peer-only delivery shape for live `cmd=01`, `cmd=02`,
  and `cmd=03`
- do not echo live-state packets back to the sender
- cache each real player's latest 4-byte compact live player record
- before peer relay, rebuild the outgoing live-state payload so the eight-slot
  player-record array contains all observed room occupants
- preserve the original source player id, RUDP flag, action/check-pad lane,
  object table, trailer bytes, and packet type
- expected validation log line:
  - `live aggregate relay cmd=01 source=1001 slots=03 size=200`

Next validation:

- verify outbound dump patterns change from single-slot payloads to aggregate
  slot payloads containing both slot `0` and slot `1`
- if opposite-console movement starts rendering, bind the bomb path from the
  already-observed `cmd=01` action/check-pad lane into the correct authoritative
  object/event flow
- if movement still does not render, the next target is not more sender echo;
  it is source/recipient semantics or the companion server-owned gameplay
  command that marks live-state frames as authoritative

## 2026-04-22 Aggregate Relay Falsified; Post-Map Slot Refresh

Fresh hardware result:

- opposite-console movement still did not render
- pressing A still produced only the temporary yellow marker, not a committed bomb
- after the timer reached zero, `Time Over!!` still appeared only after a delay

Fresh dump/log pair:

- `D:\kageserver\data\22_09-06-42_BM_test.dmp`
- `D:\kageserver\data\22_09-06-42_BM_test_out.dmp`
- server log around `04/22 09:08:47` through `09:12:37`

Data evidence:

- Kage did send aggregate live relays:
  - `live aggregate relay cmd=01 source=1001/1002 slots=03 size=200`
  - `live aggregate relay cmd=02 source=1001/1002 slots=03 size=164`
  - `live aggregate relay cmd=03 source=1001/1002 slots=03 size=36`
- parsed outbound packets proved those aggregate payloads contained both occupied compact player records, for example slot 0 `04380000` and slot 1 `35780000`
- outbound `REQ_CHAT` / Bomberman `cmd=0x0a` slot-table packets existed only during room entry; no post-start or post-map slot-table refresh existed before the aggregate live stream
- inbound `cmd=02` object tables still remained default-only during A-button attempts, so no client-origin committed bomb object was observed
- timer expiry sent ACKed `cmd=16` and `cmd=19`; both clients then sent `REQ_GAME_DATA cmd=10`, and final `cmd=15` was still not ACKed

Binary evidence:

- `0x8C099524` is the Bomberman `cmd=0x0a` slot-table handler and marks non-local real player slots as state `3`
- `0x8C09A994` and `0x8C09AAD8` only full-copy remote compact live records when the corresponding slot-table state is `3`
- therefore aggregate player records alone are not sufficient if the PlayGame transition leaves the battle slot table in a local/guest room-entry state

Current Kage translation:

- no sender self-echo is reintroduced
- no room join, rule, start, map, or Game Time Info shape is changed
- after all real players emit post-map `REQ_GAME_DATA cmd=0x0e`, Kage now sends `udpA` / Bomberman `cmd=0x0a` as `slot roster sync (post_map_slot_refresh)`
- the refresh is sent before deferred `cmd=0x14` Game Time Info and before normal live `cmd=01/02/03` aggregate peer relay starts

Next validation:

- expected server log line: `slot roster sync (post_map_slot_refresh) host_count=2 occupied_mask=03`
- if peer movement appears, continue mapping bomb creation from the observed `cmd=01` action/check-pad lane plus the still-default `cmd=02` object lane
- if movement still does not appear, do not return to sender echo; inspect the source/recipient authority semantics or another companion gameplay-state command

Timer-end follow-up from the same run:

- `cmd=16` and `cmd=19` were ACKed reliably
- both clients then sent `REQ_GAME_DATA cmd=10`, which Kage now ACKs
- the final no-payload `cmd=15` was not ACKed when sent reliably, producing packet `f` retry failures and later timeout cleanup
- Kage now sends final `cmd=15` as non-reliable while keeping `cmd=16` and `cmd=19` reliable
- expected validation line: `battle state sync (final_state) ... cmd=15 ... reliable=0`

## 2026-04-22 Live Slot Refresh And Post-End Round Cycle

Fresh hardware result:

- dump pair:
  - `D:\kageserver\data\22_09-51-15_BM_test.dmp`
  - `D:\kageserver\data\22_09-51-15_BM_test_out.dmp`
- opposite-console movement still did not render
- A-button attempts still produced only the local temporary yellow marker
- timer expiry eventually produced `Time Over!!`
- after that, the client showed additional panels such as `Collection Panel` and
  entered another Battle Start / board-reset flow without sprites

Data evidence:

- the prior `post_map_slot_refresh` line appeared, so the refresh left Kage
- aggregate `cmd=01/02/03` live relay stayed active through the timer
- inbound `cmd=02` object tables were still default-only:
  - `0` non-default object tables out of `1797`
- the final `cmd=15` sent non-reliably did not create the old reliable retry
  failure
- after final `cmd=15`, both clients started a second round/setup sequence:
  - repeated `REQ_GAME_DATA cmd=04`
  - `cmd=05` tick/state packets
  - `cmd=1a` / `cmd=1b` map blocks
  - `cmd=0f` before the later timeout

Binary-backed interpretation:

- `0x8C09B698` can clear remote state-3 slots if the active battle-object lookup
  does not resolve
- the pre-`cmd=14` slot refresh can therefore be valid but too early if the
  battle object graph is not established until live `cmd=01/02/03` traffic
  starts
- the post-end `cmd=0f` now appears to be the map-complete marker for the
  second-round flow, whereas the first board used `cmd=0e`

Current implementation:

- keep peer-only aggregate live relay
- do not reintroduce sender echo or object-only bomb probes
- send one additional `udpA` / `cmd=0a` `live_slot_refresh` after every real
  human has sent live `cmd=01/02/03` in the active round
- when post-end `cmd=04/05/1a/1b` arrives after final `cmd=15`, clear only the
  per-round post-map/game-time/live-state flags
- when post-end `cmd=0f` arrives from all players, re-run
  `post_map_slot_refresh`, `cmd=14`, liveness, and the match timer for the next
  round

Next validation:

- look for `slot roster sync (live_slot_refresh) host_count=2 occupied_mask=03`
- if movement renders, the next bomb step is to bind the already-observed
  `cmd=01` action/check-pad lane to the authoritative object/event path
- if movement still does not render, the next evidence target is the live-state
  source/authority semantics, not sender echo and not `cmd=02` object probes
- let the timer expire again and check for `post-end round reset` plus
  `post-map marker (cmd0f_post_end)` instead of timeout after the second
  Battle Start flow

## 2026-04-22 Long Stable Gameplay Loop; Periodic Slot Refresh Target

Fresh hardware result:

- dump pair:
  - `D:\kageserver\data\22_10-20-25_BM_t.dmp`
  - `D:\kageserver\data\22_10-20-25_BM_t_out.dmp`
- both players reached the board repeatedly and sprites appeared after the
  second-round reset path
- opposite-console movement still did not render
- A-button attempts still produced only the local temporary yellow marker
- after the 180-second timer expired, the clients showed `Time Out!!`, `Draw`,
  `1 point match`, and `Collection Panel`, then entered another Battle Start /
  board cycle; this repeated until the consoles were power-cycled

Data evidence from `tools/analyze_bomberman_dumps.py`:

- inbound live traffic was long-running and symmetric:
  - `cmd=01`: `8256`
  - `cmd=02`: `8256`
  - `cmd=03`: `8256`
- outbound live relay reached the opposite endpoint:
  - destination `.245`, source `1001`, `cmd=01/02/03`: `4056` each
  - destination `.246`, source `1002`, `cmd=01/02/03`: `4200` each
- aggregate outbound records contained both occupied slots for most of the run,
  including changing compact records for slot 0 and slot 1
- inbound and outbound `cmd=02` object tables remained default-only:
  - `0` non-default object tables out of `8256`
- active `cmd=01` check-pad/action records were present:
  - `1001` slot/action record examples: `044040020000`, `042040020000`, `082040020000`
  - `1002` examples: `354040120000`, `316040120000`
- the post-end sequence is now stable enough to loop rounds; the loop is likely
  the expected result of repeated `Draw` in a one-point match while nobody can
  place bombs or kill the other player

Current implementation target:

- one-shot post-map and live slot refreshes are proven to leave Kage but are not
  sufficient for remote movement
- the next narrow binary-backed lead is `0x8C09B698`, which can clear state-3
  remote slots if the active battle-object lookup is not valid at that moment
- Kage now periodically sends `udpA` / Bomberman `cmd=0x0a` as
  `slot roster sync (in_game_slot_heartbeat)` every three in-game liveness beats
  after both real players have emitted live state
- no sender echo, no object-only bomb probe, and no room/start/rule packet shape
  changes are reintroduced

Next validation:

- look for `slot roster sync (in_game_slot_heartbeat) host_count=2 occupied_mask=03`
- if movement still does not render, treat slot-table refresh as falsified and
  move to live-state authority/source semantics or another companion gameplay
  command
- bomb work remains blocked on identifying the authoritative bomb/event path;
  `cmd=02` object-table relay and state-only probes are falsified by hardware

## 2026-04-22 Periodic Slot Heartbeat Falsified And Removed

- latest hardware run:
  - `D:\kageserver\data\22_13-13-24_BM_test.dmp`
  - `D:\kageserver\data\22_13-13-24_BM_test_out.dmp`
- server-side outcome:
  - battle start reached the board and first-round timer/second-round reset sequence still worked
  - FARKUS timed out at `13:19:48`; FARKUS2 timed out one minute later after manual/disconnect cleanup
- parser evidence:
  - inbound live `cmd=01/02/03` counts stayed high: `2596`, `2595`, `2594`
  - outbound aggregate relay still populated both occupied slots for most packets (`mask=03`)
  - inbound and outbound `cmd=02` object tables remained default-only: `0` non-default tables
  - repeated reliable `REQ_CHAT cmd=0x0a` counted `301` packets over about `350s`
  - non-reliable liveness `REQ_CHAT cmd=0x1c` counted `583` packets over about `383s`
- falsification:
  - the periodic `in_game_slot_heartbeat` did not prove movement or bomb sync
  - it correlated with repeated `model.cpp` packet `f` / `REQ_CHAT` send failures to FARKUS starting at `13:19:17`
  - because the high-frequency reliable `REQ_CHAT` lane was the heartbeat, do not reintroduce periodic reliable `cmd=0x0a`
- current implementation:
  - removed periodic `in_game_slot_heartbeat`
  - retained one-shot `post_map_slot_refresh` and one-shot `live_slot_refresh`
  - retained non-reliable in-game liveness `cmd=0x1c`
- next evidence target:
  - movement failure is no longer a simple slot-roster-refresh problem
  - continue with live-state authority/source semantics or an additional companion gameplay command
  - bomb placement remains blocked because A-button tests still never produce non-default committed `cmd=02` object tables

## 2026-04-22 Clean No-Heartbeat Gameplay Baseline

- latest hardware run:
  - `D:\kageserver\data\22_14-07-06_BM_t.dmp`
  - `D:\kageserver\data\22_14-07-06_BM_t_out.dmp`
- user manually disconnected after the test; Kage timed both clients out at `14:11:36`
- server-side evidence:
  - `START BATTLE` at `14:08:56`
  - both clients sent post-map `cmd=0e` at `14:09:16`
  - Kage sent only the one-shot `post_map_slot_refresh` and `live_slot_refresh`
  - no `in_game_slot_heartbeat` lines appeared
  - no `Sending packet f` retry storm appeared in this run
- parser evidence:
  - inbound `cmd=01/02/03`: `1023`, `1021`, `1021`
  - outbound aggregate relay reached opposite endpoints for the same counts
  - outbound live masks were almost entirely `03`, proving both occupied slot records left Kage
  - reliable `REQ_CHAT cmd=0x0a` dropped to `6` total packets, matching one-shot/room refresh behavior rather than periodic spam
  - non-reliable liveness `REQ_CHAT cmd=0x1c` continued normally
  - `cmd=02` object tables were still default-only: `0/1021` non-default tables
  - active `cmd=01` check-pad records were still observed for both players:
    - FARKUS: `082040020000`, `044040020000`
    - FARKUS2: `316040120000`
- interpretation:
  - removal of the periodic reliable slot heartbeat fixed the reliable packet-noise regression
  - movement/bomb failure persists despite clean aggregate live relay and one-shot slot refreshes
  - next implementation/reverse-engineering target should be live-state authority/source semantics or an omitted companion gameplay command, not periodic slot refresh and not `cmd=02` object-only probes

## 2026-04-22 Live-State Packet-Family Correction

Fresh binary/dump correlation:

- latest clean dump pair:
  - `D:\kageserver\data\22_14-07-06_BM_t.dmp`
  - `D:\kageserver\data\22_14-07-06_BM_t_out.dmp`
- outbound aggregate `REQ_GAME_DATA cmd=01/02/03` reached the opposite endpoints with both occupied slots populated:
  - `cmd=01 source=1001 mask=03`
  - `cmd=01 source=1002 mask=03`
  - same aggregate `mask=03` pattern for `cmd=02` and `cmd=03`
- hardware still showed no opposite-console movement and no committed bombs, so the mechanical peer relay was falsified as the apply path.
- recovered client dispatcher `0x8C093FDC` handles server-command traffic and directly dispatches:
  - `cmd=01` to `0x8C0DDA44`
  - `cmd=02` to `0x8C0DDBE4`
  - `cmd=03` to `0x8C0DDD64`
  - `cmd=1C` to the same in-game liveness table path already used by Kage
- the decoded live buffers are then applied by `0x8C09758C` through:
  - `0x8C09A994` for `cmd=01`
  - `0x8C09AAD8` for `cmd=02`
  - `0x8C09AC08` for `cmd=03`

Data-driven conclusion:

- The remaining movement failure is not because the live payload never left Kage.
- The stronger mismatch is the outer packet family:
  - Kage was relaying live `cmd=01/02/03` as peer `REQ_GAME_DATA`.
  - The recovered client apply path for those same commands is the server-command dispatcher family used by `REQ_CHAT` command traffic.

Current implementation:

- Keep the existing aggregate body construction for `cmd=01/02/03`.
- Keep peer-only delivery; do not echo live-state packets back to the sender.
- Deliver live `cmd=01/02/03` as non-reliable `REQ_CHAT` server-command packets so they hit `0x8C093FDC` and the confirmed decode/apply functions.
- Keep map/state packets `cmd=05/0d/0e/1a/1b` on the existing `REQ_GAME_DATA` relay path.
- Do not change room join, rules, start transition, game time, timer-end, DreamPi bridge behavior, or one-shot slot refreshes.

Next validation:

- after board load, outbound dump should show `REQ_CHAT cmd=01/02/03` to the opposite consoles instead of `REQ_GAME_DATA cmd=01/02/03`
- remote movement is the first validation target
- if movement appears but bombs still do not commit, continue from the already-observed `cmd=01` action/check-pad lane and the still-default `cmd=02` object table evidence
- if movement still does not appear, this packet-family correction is falsified and the next target is the remaining server-owned companion command/state gate, not sender echo and not periodic `cmd=0a`

## 2026-04-22 Movement Success And Bomb Commit Patch

Fresh hardware validation:

- opposite-console movement now renders on both Dreamcasts
- bombs still do not appear; A press still only produces the temporary yellow
  tile marker

Flushed dump pair:

- `D:\kageserver\data\22_15-33-28_BM_t.dmp`
- `D:\kageserver\data\22_15-33-28_BM_t_out.dmp`

Parser evidence:

- outbound live `cmd=01/02/03` is now `REQ_CHAT`, matching the movement success
- inbound and outbound `cmd=02` object tables were still default-only before
  the new patch: `0/4789` non-default in each direction
- active `cmd=01` action records exist and include encoded cells different from
  the last sprite-position records:
  - `082040020000`
  - `044040020000`
  - `042040020000`
  - `354040120000`
  - `316040120000`
  - `356040120000`

Binary evidence used for the patch:

- `0x8C093FDC` is the server-command dispatcher for live `cmd=01/02/03`
- `0x8C0DDBE4` decodes compact `cmd=02` object records
- `0x8C075A78` applies object records; state top-nibble `0xF` materializes
  position into the local object slot and state top-nibble `0x2` routes into
  the placed/on-panel path

Current Kage translation:

- leave the proven movement path alone
- track non-empty `cmd=01` action-lane bursts per player
- arm a synthetic compact object record using the action lane's encoded cell
- merge synthetic object records into every outgoing `REQ_CHAT cmd=02` payload
  so default object tables do not erase the commit
- dashboard/admin bomb probe now uses `REQ_CHAT` rather than `REQ_GAME_DATA`

Next validation:

- expect `armed synthetic bomb from cmd=01 action` in `kageserver.log`
- expect non-default outbound `REQ_CHAT cmd=02` object records in the dump
- first pass/fail criterion is whether a committed bomb/object appears after A
  press on both consoles

## 2026-04-22 Object Lane Proven, Bomb-Up Item Identified

Hardware result after `545475e`:

- opposite-console movement still renders on both Dreamcasts
- pressing A no longer only creates the temporary yellow marker
- instead, the synthetic object appears as a bomb power-up item card

Fresh dump pair:

- `D:\kageserver\data\22_15-57-44_BM_teqr.dmp`
- `D:\kageserver\data\22_15-57-44_BM_teqr_out.dmp`

Parser evidence:

- outbound `REQ_CHAT cmd=02` now has non-default object records:
  `1774/5916`
- representative outbound record: `0440f002`
- representative inbound/client-follow-up record: `04402000`
- active `cmd=01` action records in the same run:
  - FARKUS: `044000020000`
  - FARKUS2: `356040120000`

Interpretation:

- the server-owned object-table path is proven to reach the client renderer
- `f002` maps to a bomb-up power-up item card in this observed context
- that object state should be preserved as a known future hidden-item/drop tool
- it is not the placed-bomb object state

Manual/gameplay context:

- the Dreamcast manual says A places bombs, bombs destroy soft blocks, and some
  soft blocks may contain power-up items
- the manual lists the BOMB item as increasing the amount of bombs a player can
  place by one, matching the observed bomb-up card behavior

Binary correction:

- decompiled local bomb placement at `0x8C0906F4` allocates an object slot,
  marks it active, sets object state byte `0x0a`, and writes subtype byte
  `0x0e`
- Kage now uses subtype `0x0e` for the synthetic placed-bomb attempt instead of
  copying the action-record low nibble `0x02`
- repeated re-arming of the same active synthetic object is suppressed so one
  sustained action burst does not constantly reset the object lifetime/log line

Next validation:

- logs should show `object=....:f00e` rather than `f002`
- if a placed bomb appears, the next lifecycle target is explosion timing,
  soft-block destruction, item reveal, death/win registration, and round return
- if another item appears, keep the object path but continue mapping subtype/state
  from the binary before changing unrelated gameplay flow

## 2026-04-22 `f00e` Object Injection Falsified

Fresh hardware result after `9d2917d`:

- opposite-console movement still renders
- pressing A still renders the same power-up/card object rather than a placed bomb
- walking over that object shows a small popup with a clock icon and `Judge!!`
- therefore `f00e` is not a placed-bomb compact record in this context

Server/log evidence:

- latest non-empty logs showed synthetic records leaving Kage as `f00e`, for example:
  - `object=3160:f00e`
  - `object=0420:f00e`
  - `object=3560:f00e`
- the newest dump pair from that hardware run was zero length, so the log plus hardware result are the usable evidence for this pass.

Binary correction:

- `0x8C0DD74E` is the object-record compact encoder used by the `cmd=02` send builder `0x8C0DDC7A`.
- `0x8C0DD698` is the matching compact decoder used by `cmd=02` receive handler `0x8C0DDBE4`.
- the second word of each network object record is bit-packed:
  - bits `15..12`: object/apply state read by `0x8C075A78`
  - bits `11..8`: a separate 4-bit field, not the large object subtype byte
  - bits `7..4`: field spec `0x0804`
  - bit `3`: field spec `0x0c01`
  - bits `2..1`: field spec `0x0d02`
  - bit `0`: field spec `0x0f01`
- decompiled local bomb placement at `0x8C0906F4` writes subtype byte `0x0e` into the large local object structure at byte `+0x0a`; the compact `cmd=02` low nibble does not directly write that byte.

Current implementation correction:

- automatic synthetic object injection from `cmd=01` action lanes is disabled to stop contaminating tests with the proven-wrong power-up/card object.
- Kage still logs non-empty `cmd=01` action records and keeps the manual admin object probe available as a controlled diagnostic tool.
- do not repeat `f002`, `f00e`, state-2-only, or staged `0xF -> 0x2` object probes as placed-bomb candidates.

Next evidence target:

- recover the missing authority/commit path that turns observed `cmd=01` action/check-pad records into local bomb placement, or recover a compact object record from a true placed bomb rather than deriving it from the large object subtype byte.

## 2026-04-22 Action-Lane Bomb Placement Path

Fresh Ghidra passes:

- `D:\kageserver\docs\ghidra_decompile\pass143_bomb_place_refs`
- `D:\kageserver\docs\ghidra_decompile\pass144_bomb_place_caller`
- `D:\kageserver\docs\ghidra_decompile\pass145_bomb_action_script_listing`
- `D:\kageserver\docs\ghidra_decompile\pass146_action_interpreter_refs`
- `D:\kageserver\docs\ghidra_decompile\pass147_action_interpreter_listing`
- `D:\kageserver\docs\ghidra_decompile\pass150_action_function_start_listing`
- `D:\kageserver\docs\ghidra_decompile\pass151_action_engine_refs`
- `D:\kageserver\docs\ghidra_decompile\pass152_action_vtables`

Binary evidence:

- `0x8C0906F4` remains the local placed-bomb helper; it is not directly reached by the compact `cmd=02` network object low nibble.
- The helper is reached through the action/script interpreter:
  - `0x8C0470F4` is an action engine entry referenced from data tables at `0x8C06F274` and `0x8C06F3F8`.
  - `0x8C0473A6` branches to `0x8C0479D2` when the current script record opcode is `1` and the local object flag at `+0x163`/related player state is not `0x40`.
  - `0x8C0479D2` loads a per-player/per-slot pointer through offsets `0x0768`, `0x0278`, and `0x00AC`, then calls `0x8C0906F4`.
- Earlier project evidence already falsified `cmd=01` active check-pad self-sync in `22_08-30-56_BM_t/_out`; do not reintroduce sender echo without a new binary distinction that explains why that prior run failed.

Current safe translation:

- Keep synthetic object injection disabled. Do not send `f002`, `f00e`, state-2-only, or staged `0xF -> 0x2` object probes automatically.
- Keep live `cmd=01/02/03` peer delivery on non-reliable `REQ_CHAT`, because that is the proven movement path.
- Do not deploy `cmd=01` sender self-dispatch: the prior `22_08-30-56_BM_t/_out` self-sync test is already recorded as falsified.
- The next server change must come from a new binary/data distinction, likely around the action table ownership refs at `0x8C06F274` / `0x8C06F3F8` or the remote `0x40` flag branch, not from widening echo behavior.

Validation target:

- No hardware test should be run for another sender-echo variant yet.
- Continue reversing upstream from `0x8C0470F4` and the data-table refs at `0x8C06F274` / `0x8C06F3F8` to identify the exact local/remote action ownership gate that commits a placed bomb.
- Only create a new server experiment after the binary explains why the prior active `cmd=01` self-sync did not work.

## 2026-04-22 Bomb Action Table Follow-Up

Additional Ghidra passes:

- `D:\kageserver\docs\ghidra_decompile\pass154_action_table_functions`
- `D:\kageserver\docs\ghidra_decompile\pass155_action_table_constants`
- `D:\kageserver\docs\ghidra_decompile\pass156_object_state_helpers`
- `D:\kageserver\docs\ghidra_decompile\pass157_state_helper_listing`

New binary facts:

- the action table containing `0x8C0470F4` also points at object/action helpers including `0x8C065588`
- `0x8C065588` iterates subtype/index values and has a special branch for `iVar3 == 0x0e`
- that `0x0e` branch calls `0x8C018554(..., 5)`, while `0x0d` and other branches call nearby helpers with different state values
- `0x8C018554` clears/initializes state at object offset `+0x0118`, then calls `0x8C06471E` using a pointer reached through `+0x0110` and `+0x0768`; it stores the returned handle at `+0x016c`
- these offsets overlap the action-engine state offsets already seen around `0x0768`, `0x0278`, and the local/remote `0x40` branch

Data-driven interpretation:

- subtype/index `0x0e` is still strongly tied to the placed-bomb local object/action path
- the missing server translation is not a compact object low nibble and not a sender echo retest
- the next useful reverse-engineering target is the producer/consumer chain for the `0x0e` action-table branch and the `+0x0163` / `+0x016c` ownership flags, especially how remote-controlled objects avoid `0x8C0906F4` and what server-visible packet later carries the committed object

Safe runtime state:

- no Kage gameplay code change is deployed from this pass
- the server has been rebuilt and restarted at `127.0.0.1:8765` with synthetic object injection disabled and without `cmd=01` sender self-dispatch

## 2026-04-22 Local Bomb Helper And Compact Object Gate

Additional Ghidra passes:

- `D:\kageserver\docs\ghidra_decompile\pass158_bomb_subtype_helpers`
- `D:\kageserver\docs\ghidra_decompile\pass159_object_state_counter_funcs`
- `D:\kageserver\docs\ghidra_decompile\pass160_bomb_object_apply_listings`
- `D:\kageserver\docs\ghidra_decompile\pass161_local_bomb_helper_full`
- `D:\kageserver\docs\ghidra_decompile\pass162_local_bomb_helper_tail`
- `D:\kageserver\docs\ghidra_decompile\pass163_action_bomb_refs`
- `D:\kageserver\docs\ghidra_decompile\pass164_bomb_helper_dependencies`
- `D:\kageserver\docs\ghidra_decompile\pass165_action_table_refs`

New binary facts:

- `0x8C075A78` is still the compact `cmd=02` object-apply path. Its compact branch for selector `0x0e` jumps into the same materialization lane as selector `5`; that lane uses the compact record bits to materialize/update an object, but it does not directly write the large local object subtype byte.
- `0x8C09109C`, one of the downstream object-apply helpers reached from `0x8C075A78`, only continues its full visible-object path for large subtype byte `0x0d`, or for subtype `0x0b` with a specific player-state byte equal to `1`. Other subtypes, including `0x0e`, are pushed to state `4` and mark dirty flags instead of becoming the placed-bomb object.
- This explains the hardware evidence for `f002` and `f00e`: the compact object lane is real enough to render/pick up power-up cards, but the tested compact records were not the placed-bomb path.
- `0x8C0906F4` is richer than a four-byte object record. It checks board occupancy at offset `+0x0A88`, looks for a free object slot in the `+0x0AC0` object array with stride `0x74`, initializes the object with `+0x08 = 1` and large subtype byte `+0x0A = 0x0E`, then updates the grid/object pointer tables including `+0x0A98` / `+0x0A9C`.
- The same helper later writes object state `+0x08 = 0x0A`, packs grid coordinates through bitfield helpers keyed by `0x0605`, updates object flags at byte `+0x02`, and stores a source/action pointer at `+0x0C`.
- The only direct code reference to `0x8C0906F4` is still `0x8C0479D2`; `0x8C0479D2` is reached from the action engine behind the table entries at `0x8C06F274` and `0x8C06F3F8`.

Data-driven interpretation:

- The server should not send another compact object subtype probe yet. That path has been falsified for placed bombs and is now useful mainly as future item/drop tooling.
- The next useful target is the upstream action ownership/permission path that lets `0x8C0470F4 -> 0x8C0479D2 -> 0x8C0906F4` run for a real A-press, especially the `+0x0163` flag, the `+0x016c` handle/state, and the table entries around `0x8C06F274` / `0x8C06F3F8`.
- A hardware test is not worth running from this pass because no Kage runtime behavior changed and the new evidence predicts the current server will still show movement but no committed bombs.

## 2026-04-22 Cmd01 Action Table Aggregation Patch

Additional Ghidra passes:

- `D:\kageserver\docs\ghidra_decompile\pass167_action_table_family_followup`
- `D:\kageserver\docs\ghidra_decompile\pass168_cmd01_sender_followup`
- `D:\kageserver\docs\ghidra_decompile\pass169_cmd01_action_helpers`

New binary facts:

- `0x8C09AD3C` builds the client-origin `cmd=01` payload with command word `0x02C8`, size `200`.
- The `cmd=01` payload layout is:
  - command/word at `+0x00`
  - eight four-byte live player records at `+0x04`
  - a four-byte action priority/counter at `+0x24`
  - twenty-four six-byte action records at `+0x28`
  - a sixteen-byte mask block at `+0xB8`
- `0x8C079A92` tests whether an internal action table entry is active: it reads `*(object+0x50 + index*0x10)` and optionally matches the entry owner/id at `+0x04`.
- `0x8C079ACE` returns the action table entry value at `*(object+0x50 + index*0x10 + 0x0C)`.
- `0x8C09AD3C` scans all twenty-four action entries, keeps a maximum/priority value, then encodes the active entries into the `cmd=01` action-record table before calling encoder `0x8C0DDAE8`.
- `0x8C0DDA44` decodes `cmd=01` into the same structure, and `0x8C09A994` applies it by copying the twenty-four six-byte action records into the receiver-side object/action table at the object pointer's `+0x5C`.

Data-driven interpretation:

- `cmd=01` is a global live/action-table update, not only eight movement records.
- Kage's prior aggregate live relay only merged the eight player records. It left the twenty-four action records as whichever single client sent the current packet.
- The earlier direct sender self-sync remains falsified. The new patch is different: it aggregates known active action records into the shared `cmd=01` action table while keeping peer delivery on the already validated non-reliable `REQ_CHAT` path.
- This does not re-enable compact synthetic object injection and does not send another guessed object subtype.

Implemented translation:

- `BMRoom::noteActionLane` now records the active `cmd=01` six-byte action record and its original table index per real player.
- `BMRoom::buildAggregatedLivePayload` now takes an `actionMask` output and, for `cmd=01` only, merges stored active action records back into the twenty-four-record table at offset `0x28`.
- Live aggregate logs now include both `slots=...` and `actions=...`, so the next hardware run can prove whether both player action records are leaving Kage in one outbound `cmd=01` table.
- `BombermanSyntheticObjectInjectionEnabled` remains `false`.

Validation target:

- This build is worth a hardware test now.
- Expected log lines during gameplay should include `live aggregate relay cmd=01 ... slots=03 actions=03 size=200` after both players have produced active `cmd=01` action records.
- Desired result is still conservative: movement must remain working, and A-press should either place a real bomb or produce new packet evidence that the aggregated action table is still not enough.
- If bombs still do not appear, the next data target is not compact object subtype probing; inspect whether outbound `cmd=01` action tables contain both players' records and whether clients then emit non-default committed `cmd=02` object tables.

## 2026-04-23 Live Source Preservation And Raw Relay Correction

Fresh dump evidence from `D:\kageserver\data\23_13-20-19_BM_t.dmp` and
`D:\kageserver\data\23_13-20-19_BM_t_out.dmp` narrowed the next server change:

- inbound live `cmd=01/02/03` from real hardware already carried mostly full slot masks:
  - `cmd=01 source=00001002 mask=03: 641`
  - `cmd=01 source=00001001 mask=03: 332`
  - same pattern held for `cmd=02` and `cmd=03`
- outbound live `REQ_CHAT cmd=01/02/03` packets used flags `0x2000`, so they were not marked `FLAG_RELAY`
- `Player::send` rewrote header offset `+4` on every non-relay packet, which meant the live outbound stream was being relabeled with the recipient-local player id
- the outbound dump matched that exactly:
  - only `source=00001002` packets reached `192.168.50.245`
  - only `source=00001001` packets reached `192.168.50.246`

## 2026-04-23 Compact Object Selector Decode And Later Event Family

Additional binary work:

- `D:\kageserver\docs\ghidra_decompile\pass134_bomb_object_helpers\8c09e790_FUN_8c09e790.c`
- `D:\kageserver\docs\ghidra_decompile\pass134_bomb_object_helpers\8c09e7e4_FUN_8c09e7e4.c`
- `D:\kageserver\docs\ghidra_decompile\pass160_bomb_object_apply_listings\8c075bcc_8c076260.lst`
- `D:\kageserver\docs\ghidra_decompile\pass159_object_state_counter_funcs\8c09109c_FUN_8c09109c.c`
- `D:\kageserver\docs\ghidra_decompile\pass122_bomb_end_control_funcs\8c09758c_FUN_8c09758c.c`
- latest dump pair:
  - `D:\kageserver\data\23_13-20-19_BM_t.dmp`
  - `D:\kageserver\data\23_13-20-19_BM_t_out.dmp`

New binary facts:

- The compact object helper family is now decoded enough to map the packed
  fields directly:
  - `0x8C09E7E4` is the compact 16-bit extractor.
  - `0x8C09E790` is the matching compact 16-bit writer.
  - key `0x0004` extracts bits `12..15` from the second compact word, which is
    the high nibble of compact object byte `3`.
  - therefore the selector used by `0x8C075A78` is the high nibble of compact
    object byte `3`.
- The other recovered compact field keys used by `0x8C075A78` map as:
  - `0x0605` -> bits `5..9`
  - `0x0D02` -> bits `1..2`
  - `0x0B01` -> bit `4`
  - `0x0C04` -> bits `0..3`
  - `0x0804` -> bits `4..7`
- This confirms the current `0x8C075A78` compact-object families are selector
  families on compact byte `3` high nibble:
  - selector `0x4` routes through `0x8C09109C`
  - selector `0x5` and `0xE` route through the `0x50` family path
  - selector `0xF` routes through the materialization path that copies compact
    position/packed bits into a large local object
- `0x8C09109C` still rejects the local bomb helper subtype for full visible
  object continuation:
  - it only continues the deeper visible-object path when large subtype byte
    `+0x0A == 0x0D`
  - or when subtype `0x0B` is paired with player-state byte `+0x0134 == 1`
  - other subtypes, including the local bomb helper subtype `0x0E`, are forced
    to state `4` and dirty-flagged instead
- `0x8C09758C` is now confirmed as a later battle event dispatcher driven by an
  internal state field at object/game offset `+0x48`. It emits explicit network
  events when that state reaches:
  - `0x0D` -> server command `0x1A`
  - `0x0E` -> server command `0x1C`
  - `0x0F` -> server command `0x1E`
  - `0x10` -> server command `0x20`
  - `0x16` -> server command `0x26`
- The latest failed bomb-attempt dump did not yet reach those later post-bomb
  event states:
  - inbound and outbound dumps showed the usual live `cmd=01/02/03`, liveness
    `0x1C`, map/setup `0x1A/0x1B`, and no fresh gameplay `0x1E`, `0x20`, or
    `0x26`
  - so those later event commands are part of the downstream gameplay roadmap,
    but they are not yet the first blocker for bomb placement in the current run

Data-driven conclusion:

- The compact object record is no longer a black box:
  - selector family = compact byte `3` high nibble
  - the tested `0xF` and `0x5`/`0xE` families are real, but they are not yet
    sufficient to produce the fully visible placed-bomb object path
- The newly recovered `0x1E` / `0x20` / `0x26` gameplay event family is real,
  but should not be used as the immediate fix target yet because the latest
  hardware dump never reached those states.
- The first blocker still sits upstream of those later gameplay events:
  - either the local commit path into the placed-bomb-visible subtype/state
  - or the still-missing authority/source condition that allows the A-press to
    mature beyond the temporary yellow marker into a committed object lifecycle
- the same outbound build also merged both players' active `cmd=01` action records into one destination-local packet, while `cmd=02` object tables still remained `0/961` non-default
- conclusion: the next fix should correct source identity and stop collapsing the raw per-player live stream before touching any more object logic

Implemented runtime change:

- `Player::send` now preserves an explicitly prefilled source id for non-relay packets when the caller already set offset `+4`
- Bomberman live `cmd=01/02/03` now relays the raw sender payload instead of rebuilding an aggregated live payload
- live `REQ_CHAT cmd=01/02/03` explicitly prefill the source id with the real sender player id
- active `cmd=01` now self-echoes the raw sender payload instead of the merged aggregate payload
- synthetic object injection remains disabled

Next validation:

- outbound dumps should show both source ids (`00001001` and `00001002`) arriving at both Dreamcast endpoints for live `cmd=01/02/03`
- logs should show `live raw relay cmd=... source=... slots=...` and `cmd=01 raw self-echo ...`
- if bombs still do not appear after that, the remaining target stays the client-local action ownership / `0x40` gate and not live packet relabeling

## 2026-04-23 Sender Cmd02/Cmd03 Receive Gap

Fresh evidence since the last hardware run tightened the first remaining
gameplay blocker further.

Artifacts:

- latest runtime dumps:
  - `D:\kageserver\data\23_13-20-19_BM_t.dmp`
  - `D:\kageserver\data\23_13-20-19_BM_t_out.dmp`
- live receive dispatcher:
  - `D:\kageserver\docs\ghidra_decompile\pass108_battle_live_helpers\8c093fdc_FUN_8c093fdc.c`
  - `D:\kageserver\docs\ghidra_decompile\pass116_battle_input_listings\8c093f80_8c094170.lst`
- recovered action/object family tables:
  - `D:\kageserver\docs\ghidra_decompile\pass152_action_vtables\8c06f240_8c06f2a0.lst`
  - `D:\kageserver\docs\ghidra_decompile\pass154_action_table_functions\8c064f04_FUN_8c064f04.c`
  - `D:\kageserver\docs\ghidra_decompile\pass154_action_table_functions\8c065588_FUN_8c065588.c`
  - `D:\kageserver\docs\ghidra_decompile\pass156_object_state_helpers\8c018554_FUN_8c018554.c`
  - `D:\kageserver\docs\ghidra_decompile\pass203_callers\8c0470f4_FUN_8c0470f4.c`

New proven facts:

- the historical outbound dump, split by destination endpoint and source id,
  shows the acting console still did not receive its own live `cmd=02` /
  `cmd=03` stream:
  - `192.168.50.245 source=00001002` received `cmd=02: 335`, `cmd=03: 335`
  - `192.168.50.246 source=00001001` received `cmd=02: 626`, `cmd=03: 626`
  - those counts followed the opposite console's send cadence, not the
    recipient's own cadence
- at the same time, that dump already had a sender-facing `cmd=01` lane:
  - outbound dump showed `cmd=01` to both endpoints at near-full cadence
- `0x8C093FDC` is the live receive-only dispatcher:
  - received server command `0x01` calls `0x8C0DDA44`
  - received server command `0x02` calls `0x8C0DDBE4`
  - received server command `0x03` calls `0x8C0DDD64`
- `0x8C09758C` proves the active battle loop consumes those three receive
  families separately:
  - non-zero active-object flag `+0x94` calls `0x8C09A994` then clears `+0x94`
  - non-zero active-object flag `+0x98` calls `0x8C09AAD8` then clears `+0x98`
  - non-zero active-object flag `+0x9C` calls `0x8C09AC08` then clears `+0x9C`
- those three apply functions write distinct stage markers back into the same
  active battle object:
  - `0x8C09A994` -> `+0x44 = 1`
  - `0x8C09AAD8` -> `+0x44 = 2`
  - `0x8C09AC08` -> `+0x44 = 3`
- the same client-side family still converges on the bomb gate:
  - vtable/data table `0x8C06F240` contains `0x8C064F04`, `0x8C065588`, and
    `0x8C0470F4`
  - `0x8C065588` calls `0x8C018554`, which writes the handle at `+0x016c`
  - `0x8C0470F4` is the upstream action-engine gate that chooses the true
    placed-bomb path `0x8C0479D2 -> 0x8C0906F4`

Data-driven conclusion:

- the missing sender `cmd=02/03` receive lane is now the strongest remaining
  server-side candidate for why the A-press still stalls at the yellow marker:
  - it is a real, measured asymmetry still present in the historical live run
  - the client main loop proves those receive lanes are explicit stage gates,
    not just passive mirrors
  - it feeds the same recovered client state family as the `+0x0163` /
    `+0x016c` / `+0x0170` placed-bomb gate

Runtime correction:

- the current checked-out source and current `kageserver.exe` are the raw-live
  source-id-preserving variant
- the older `merged aggregate self-dispatch` log trail is historical and should
  not drive new rebuild decisions

Next trusted server change:

1. Keep the current raw-live baseline.
2. Add sender self-dispatch for live `cmd=02` and `cmd=03` in the same
   `REQ_CHAT` server-command family already used for live peers.
3. Only then run the next hardware test, because this is the first remaining
   change with a direct dump-to-binary causal chain into the placed-bomb gate.

## 2026-04-23 Sender Cmd02/Cmd03 Self-Echo Falsified

Fresh validation on the next run falsified that exact change.

Artifacts:

- `D:\kageserver\data\23_18-36-42_BM_t.dmp`
- `D:\kageserver\data\23_18-36-42_BM_t_out.dmp`
- `D:\kageserver\logs\kageserver.log`

New proven facts:

- `cmd=02` / `cmd=03` sender self-echo dramatically increased outbound live
  traffic without changing the bomb result:
  - previous run `23_13-20-19_BM_t_out`: `REQ_CHAT cmd=02: 961`,
    `REQ_CHAT cmd=03: 961`
  - falsifying run `23_18-36-42_BM_t_out`: `REQ_CHAT cmd=02: 3052`,
    `REQ_CHAT cmd=03: 3050`
- both endpoints now received both source streams for those lanes:
  - `192.168.50.245` received `source=00001001` and `source=00001002` for
    `cmd=02` and `cmd=03`
  - `192.168.50.246` received `source=00001001` and `source=00001002` for
    `cmd=02` and `cmd=03`
- the committed object lane still did not move at all:
  - `cmd=02 non-default object tables: 0/3052`
- live logs directly reflected the added duplication:
  - repeated `cmd=02 raw self-echo size=164 slots=03`
  - repeated `cmd=03 raw self-echo size=36 slots=03`
- the user-visible result matched the dump shape:
  - no bomb placement
  - remote sprite jitter / bounce regression

Data-driven conclusion:

- the `cmd=02` / `cmd=03` sender self-echo hypothesis is falsified
- the change injects duplicate full-slot authoritative streams but still does
  not produce any non-default object commit
- this also explains the new jitter regression better than any upstream bomb
  interpretation, because the falsifying run doubled both-source delivery on the
  exact live lanes that drive movement/object refresh

Next trusted step:

1. Revert `cmd=02` / `cmd=03` sender self-echo to restore the prior movement
   stability baseline.
2. Keep the raw source-id-preserving live relay and existing `cmd=01`
   self-echo.
3. Return to the upstream client-local ownership / placed-bomb gate path
   (`0x8C0470F4`, `0x8C0479D2`, `0x8C0906F4`, `+0x0163`, `+0x016c`) before the
   next bomb-placement hardware test.

## 2026-04-23 Slot-Table Ownership States And Decoder Boundary

More static recovery tightened the remaining pre-fix boundary:

- `0x8C099524` is the exact server `cmd=0x0a` slot-table state builder:
  - local primary seat -> state `1`
  - local guest seats -> state `2`
  - non-local real-player seats -> state `3`
  - it clears an 8-entry `0x14`-byte slot table, rebuilds it from the roster payload, then emits the visible slot/name presentation updates
- that confirms Kage's existing post-map `cmd=0x0a` refresh is still the correct ownership-family command. The open bomb issue is not "wrong slot-table command family".
- `0x8C0DDA44`, `0x8C0DDBE4`, and `0x8C0DDD64` are now sharply bounded as decode/staging helpers:
  - `0x8C0DDA44` unpacks eight live player records, the 24-entry `cmd=01` action table, and a 16-byte trailer
  - `0x8C0DDBE4` unpacks eight live player records, the 28 compact `cmd=02` object records, and a 16-byte trailer
  - `0x8C0DDD64` unpacks the compact eight-slot `cmd=03` state block
  - they feed later apply/state code, but they are not the direct writers for the `+0x0163` / `+0x016c` ownership bytes
- raw listing resolution around `0x8C0470F4` / `0x8C0479D2` now pins the action-gate offsets:
  - `+0x0163` = ownership/permission flag byte
  - `+0x016C` = handle/state area
  - `+0x0170` = companion comparison table used by the later action-script comparisons
  - `0x8C0479D2` still reaches `0x8C0906F4` only when the acting player's `+0x0163` bit `0x40` is clear
- the newly recovered lower half of `0x8C065588` shows the selector family around the `0x0e` branch is still upstream of that same gate:
  - selector index `0x0e` triggers `0x8C018554(...,5)`
  - selector index `0x0d` triggers `0x8C011034(...,4)`
  - the other active indices in that loop trigger `0x8C018554(...,1)`

Implication:

- no new gameplay patch is justified from this pass
- the next trustworthy change must come from identifying what flips `+0x0163 bit 0x40` and what server-visible event advances the queued `0x0e` branch into the committed bomb lifecycle

## 2026-04-23 Bomb Commit Helper Follow-Up

Additional Ghidra pass:

- `D:\kageserver\docs\ghidra_decompile\pass209_bomb_commit_helpers`

New binary facts:

- `0x8C079A5C` and `0x8C079A80` are now directly decompiled:
  - `0x8C079A5C` marks an action-table entry active at
    `object+0x50 + index*0x10` and stores the entry value at `+0x04`
  - `0x8C079A80` clears that same entry by zeroing the active flag and stored
    value
  - this proves the recovered action-table family is staged bookkeeping only,
    not the committed large bomb-object table
- `0x8C082910` and `0x8C0840C0`, both called from the true local bomb helper
  `0x8C0906F4`, are board/tile validation helpers:
  - `0x8C082910` classifies the target cell from occupancy/object layers and
    returns a compact tile code
  - `0x8C0840C0` performs the deeper placeability walk and rejects blocked or
    already-occupied cells before commit continues
- `0x8C061E2C`, reached from the later `0x8C0906F4` tail, computes display or
  panel coordinates from the object's packed flags and board position; it does
  not flip ownership/permission state
- `0x8C0935B0`, also reached from the helper tail, is a queue or ring-buffer
  advance helper that rotates a linked buffer and updates indices at `+0x48`,
  `+0x4c`, and `+0x50`

Data-driven interpretation:

- the action-table family is now proven bookkeeping only
- the newly recovered board-validation family is downstream of the true local
  bomb helper, not the upstream yellow-marker gate
- these helpers do not explain why the acting player still reaches the queued
  path instead of `0x8C0479D2 -> 0x8C0906F4`
- the remaining blocker is still the writer or consumer chain for the acting
  player's `+0x0163 bit 0x40`, plus the exact server-visible event that clears
  it before the local helper runs
- no honest `95%+` gameplay fix is justified yet from the current evidence set

## 2026-04-23 Downstream Placed-Bomb Object Chain And Runtime Reconciliation

Additional caller tracing and live-runtime verification tightened two important
boundaries.

Artifacts:

- `D:\kageserver\docs\ghidra_decompile\pass211_object_state_callers`
- `D:\kageserver\docs\ghidra_decompile\pass212_object_state_caller_listing`
- `D:\kageserver\data\23_13-20-19_BM_t.dmp`
- `D:\kageserver\data\23_18-36-42_BM_t.dmp`
- `D:\kageserver\logs\kageserver.log`
- `D:\kageserver\kageserver.exe`

New proven facts:

- `0x8C0906F4` is firmly inside the true local placed-bomb object path:
  - it allocates a free `0x74`-byte panel/object slot
  - seeds local bomb state into that slot
  - stores the spawned object back into the panel occupancy table
- `0x8C075A78` is a downstream object/panel dispatcher reached from that same
  lifecycle:
  - in the recovered state-`4` branch it computes a directional bitmask
    `1/2/4/8`
  - it then calls `0x8C09109C`
- `0x8C09109C` mutates the local object state further and sets
  `object+0x28 |= 0x40`
- the downstream placed-bomb object lifecycle is therefore now mapped as:
  - `0x8C0479D2 -> 0x8C0906F4 -> 0x8C075A78 -> 0x8C09109C`
- this proves the visible yellow-marker failure is still happening before the
  client is allowed to enter the real local placed-bomb object chain

Runtime reconciliation:

- the regressed `cmd=02` / `cmd=03` sender-self-echo run ended at
  `2026-04-23 18:41:07` in `kageserver.log`
- the current clean rebuild wrote `D:\kageserver\kageserver.exe` at
  `2026-04-23 18:44:06`
- the currently running server process restarted at `2026-04-23 18:44:30`
- no newer hardware dump pair exists after that clean restart

Data-driven conclusion:

- the duplicate `cmd=02` / `cmd=03` self-echo path is both falsified and no
  longer the live runtime baseline
- the current trustworthy live baseline is the restored raw-live build without
  `cmd=02` / `cmd=03` sender self-echo
- the remaining honest target is still the upstream writer/consumer chain for
  the acting player's `+0x0163 bit 0x40`, because the downstream placed-bomb
  object lifecycle is now proven to exist once that gate is cleared

## 2026-04-24 Networked Bomb Gate Split Clarified

Fresh action-root inspection narrowed the meaning of the remaining gate.

Artifacts:

- `D:\kageserver\docs\ghidra_decompile\pass178_action_root\8c0470f4_FUN_8c0470f4.c`
- `D:\kageserver\docs\ghidra_decompile\pass148_action_interpreter_entry\8c047940_FUN_8c047940.c`
- `D:\kageserver\docs\ghidra_decompile\pass148_action_interpreter_entry\8c0479d2_FUN_8c0479d2.c`
- `D:\kageserver\docs\ghidra_decompile\pass168_cmd01_sender_followup\8c09ad3c_8c09afe4.lst`

New proven facts:

- `0x8C0470F4` / `0x8C047940` do not use `+0x0163 bit 0x40` as a simple
  "broken bomb" flag.
- When the acting player's `+0x0163 bit 0x40` is clear and the matched action
  script resolves to opcode `1`, the code takes the true local placed-bomb
  path via `0x8C0479D2 -> 0x8C0906F4`.
- When that same bit is set, the code does not drop the action. Instead it
  appends `+0x0e` into the per-player pending action table at
  `player + DAT_8c0473fc / DAT_8c0473fe / DAT_8c047400`.
- `0x8C09AD3C`, the live `cmd=01` sender, then scans the same action-table
  family through:
  - `0x8C079A92` to test whether an entry is active
  - `0x8C079ACE` to fetch the entry value used when packing the six-byte
    action records

Data-driven interpretation:

- in online/network-authoritative play, A-press is likely supposed to enter the
  queued selector-`0x0e` path rather than always calling the direct local bomb
  helper immediately
- that means the remaining blocker is probably not "clear the bit so bombs work
  offline-style"
- the next trustworthy target is to prove how the queued `0x0e` branch is
  represented in the outgoing `cmd=01` action-table stream and what
  authoritative response causes the client to promote that queued path into the
  real placed-bomb object lifecycle
- fresh dump parsing keeps that target narrow:
  - latest A-press action records remain stable six-byte forms such as
    `354040120000` and `044040020000`
  - parsed words stay at:
    - source `1002`: `w1=0x3540/0x3160`, `w2=0x4012`, `w3=0x0000`
    - source `1001`: `w1=0x0440/0x0820/0x0420`, `w2=0x4002`, `w3=0x0000`
  - there is still no obvious literal network-field value `0x0e` in those
    observed records, so the queued selector is likely represented indirectly
    rather than as a plain one-byte action opcode on the wire

Practical consequence:

- no honest gameplay patch should try to force-clear `+0x0163 bit 0x40`
  without stronger binary evidence
- the safer next line of work is action-record decoding and queued-`0x0e`
  round-trip correlation rather than more blind `cmd=02` object synthesis

## 2026-04-24 Cmd01 Action Word Decode And Queue Entry Layout

Fresh helper recovery resolved the compact action-word reader and the shared
action-table entry layout that sits between the queued networked bomb path and
live `cmd=01`.

Artifacts:

- `D:\kageserver\docs\ghidra_decompile\pass218_action_record_helpers`
- `D:\kageserver\docs\ghidra_decompile\pass219_action_record_followups`
- `D:\kageserver\docs\ghidra_decompile\pass220_action_table_family`
- `D:\kageserver\data\23_13-20-19_BM_t.dmp`
- `D:\kageserver\data\23_18-36-42_BM_t.dmp`

New proven facts:

- `0x8C09E7E4` is a generic compact bitfield extractor, not a bomb-specific
  helper:
  - with selector `0x0004`, it reads the top nibble of the 16-bit word
  - with selector `0x0804`, it reads `(word >> 4) & 0xf`
  - with selector `0x0605`, it reads `(word >> 5) & 0x1f`
- the staged action table rooted at `object+0x50 + index*0x10` is now resolved:
  - `0x8C079A5C` sets `+0x00 = 1` and stores owner/id at `+0x04`
  - `0x8C079A70` stores a value at `+0x04`
  - `0x8C079A92` tests active state and optionally matches owner/id
  - `0x8C079ADC` stores queued metadata at `+0x08`
  - `0x8C079AC0` stores the encoded live/action value at `+0x0c`
  - `0x8C079ACE` returns that `+0x0c` value for live `cmd=01` send
- `0x8C073F36` compares two applied `cmd=01` action buffers (`+0x5c` vs `+0x58`)
  and on one specific decoded transition it:
  - calls `0x8C0844D4`
  - stores extra queue metadata through `0x8C079ADC` and `0x8C079AC0`
- `0x8C0844D4` is a deeper object allocator/initializer for a `0x74`-byte
  battle object slot, so `0x8C073F36` is already on a real gameplay-side
  promotion path rather than a transport-only bookkeeping path

Decoded live evidence from the latest two bomb-attempt dumps:

- source `1001`, active record index `0`:
  - `082040020000` -> `type4=0`, `nibble=4`, `dir6=8`, `arg5=0`, `tick9=0`
  - `042040020000` -> `type4=0`, `nibble=4`, `dir6=8`, `arg5=0`, `tick9=0`
  - `044040020000` -> `type4=0`, `nibble=4`, `dir6=16`, `arg5=0`, `tick9=0`
- source `1002`, active record index `1`:
  - `316040120000` -> `type4=1`, `nibble=4`, `dir6=24`, `arg5=1`, `tick9=0`
  - `354040120000` -> `type4=1`, `nibble=4`, `dir6=16`, `arg5=1`, `tick9=0`

Data-driven interpretation:

- the latest two bomb-attempt dumps still do not show a distinctive new outbound
  `cmd=01` action-word family for A-press; the observed compact records stay in
  the same tiny decoded state set as movement-facing traffic
- a wider scan across all captured `*BM*.dmp` files tightened that further:
  - decoded `type4` values in the observed `cmd=01` action word only ever hit
    `0` or `1`
  - there are zero captured live `cmd=01` records with `type4=5` or `type4=6`
- that matters because `0x8C073F36` only enters its real promotion branches on
  those higher decoded states:
  - `new type4 == 6` with `old type4 == 4`
  - `new type4 == 5` with `old type4 == 4` or `0`
- that means the missing bomb promotion signal is unlikely to be a simple
  one-field delta inside the already observed outbound `cmd=01 +0x0c` values
- the stronger remaining hypothesis is that the local queued bomb path also
  depends on companion queue metadata (`+0x08`) or another authoritative apply
  step that the remote side is not reconstructing from the current relay alone
- no honest `95%+` gameplay test recommendation is justified yet; the next
  trustworthy target is whichever caller pair writes and later consumes the
  `+0x08` / `+0x0c` queue entry fields around `0x8C073F36`

Fresh follow-up on 2026-04-24 removes one more false lead from that search:

- `0x8C0793E0 -> 0x8C079324 -> 0x8C079AC0` is a real compact action-record
  writer chain, but it is not a direct placed-bomb producer.
- `0x8C079324`:
  - forces the staged six-byte record's byte `+3` high nibble to `0x4`
  - copies caller-selected fields into the staged record
  - commits the encoded action value through `0x8C079AC0`
- string resolution around the shared helper `0x8C079458` proves the adjacent
  `0x8C076338` / `0x8C076364` / `0x8C07645A` / `0x8C076580` family is the
  movement/check-pad lane:
  - `0x8C18549C`: `--- Missed X-Pos %d PlayerID %d`
  - `0x8C1854D8`: `--- Missed Y-Pos %d PlayerID %d`
  - `0x8C1854BC`: `---SetCheckPads PlayerID %d`
  - `0x8C18545C`: `---mPosition %d:%d %d %d`
- that same evidence shows `0x8C079458` is being used as a debug/log formatter
  in this family, not as a network publish primitive.
- the bomb/panel timeout strings instead belong to `0x8C07F510`, including:
  - `Panel %d Chain FLAG_APPEAR Timeout.`
  - `Panel %d Chain FLAG_JUDGE Timeout.`
  - `Panel %d was Breaked.`
- this split matters because it removes the already-recovered check-pad builders
  from the remaining bomb hypothesis space.
- the next trustworthy target is now the sibling compact-action family that
  feeds the queued/networked bomb branch into `0x8C073F36`'s required
  `type4=5/6` promotion, not the `0x8C0763xx` movement/check-pad builders.

## 2026-04-24 downstream serializer boundary tightened

Fresh caller and raw-listing recovery narrows the remaining bomb gap further.

Artifacts:

- `D:\kageserver\docs\ghidra_decompile\pass236_50_branch_helpers`
- `D:\kageserver\docs\ghidra_decompile\pass237_50_branch_callers`
- `D:\kageserver\docs\ghidra_decompile\pass238_0730a8_constants`

New proven facts:

- `0x8C09E7C8` is the compact bitfield reader paired with `0x8C09E790`; this
  read/write pair is reused by the queued `0x8C075A78` branch and the
  downstream compact serializers.
- fresh caller recovery for `0x8C09109C` is now sharply constrained:
  - in the new caller dump, the only recovered Bomberman-side caller is
    `0x8C075A78`
  - this confirms `0x8C075A78` as the compact-record gate into the deeper
    bomb/panel object path
- raw listing recovery around `0x8C0730A8` proves its object-state serializer
  tags are not the missing `type4=5/6` family:
  - state `4` writes high-byte tag `0x40`
  - state `7` writes high-byte tag `0xC0`
  - state `8` writes high-byte tag `0xD0`
  - the associated selectors in that serializer are `0x0004`, `0x0404`, and
    `0x0605`

Data-driven consequence:

- the downstream object-state serializer is not where the missing
  `type4=5/6` promotion is generated
- the unresolved gap therefore still sits upstream of object serialization, in
  the queued/action promotion path that must later feed `0x8C073F36`
- the next trustworthy reverse-engineering target is the compact action/queue
  producer that should create that pre-serialization transition, not another
  `0x8C0730A8` tag guess or relay tweak

## 2026-04-24 queue metadata asymmetry tightened

Fresh caller recovery and adjacent range dumps narrow the unresolved queue
metadata path further.

Artifacts:

- `D:\kageserver\docs\ghidra_decompile\pass239_queue_writer_callers`
- `D:\kageserver\docs\ghidra_decompile\pass240_action_table_neighbors`
- `D:\kageserver\docs\ghidra_decompile\pass241_action_table_getter_callers`
- `D:\kageserver\docs\ghidra_decompile\pass242_0781xx_range`
- `D:\kageserver\docs\ghidra_decompile\pass243_0783xx_range`

New proven facts:

- `0x8C079AEA` is the getter for staged queue metadata field `+0x08`.
- `0x8C079AF8` is the getter for the staged entry active flag at `+0x00`.
- fresh caller recovery for the action-table writers is now sharply
  asymmetrical:
  - `0x8C079ADC` (`+0x08` writer) is only recovered from `0x8C073F36`
  - `0x8C079AC0` (`+0x0c` writer) is recovered from `0x8C073F36` and
    `0x8C079324`
  - `0x8C079A70` (`+0x04` writer) is recovered from `0x8C09AC08`
- `0x8C09AC08` belongs to the live receive/apply family and does reconstruct
  staged owner/id state through `0x8C079A70`, but the recovered receive path
  still does not show a matching `+0x08` metadata reconstruction step.
- sender-side live `cmd=01` evidence remains one-sided:
  - `0x8C09AD3C` uses `0x8C079A92` to test active entries
  - `0x8C09AD3C` uses `0x8C079ACE` to read `+0x0c`
  - no recovered sender/live caller currently uses `0x8C079AEA` to read `+0x08`
- the raw `0x8C0781F4` pointer-table hit for `0x8C079AEA` sits inside a
  battle-end/abort constant pool; adjacent recovered functions
  `0x8C078098/0x8C078354/0x8C0783F8/0x8C078482/0x8C0784D4/0x8C078514`
  stayed in end-of-play or hyper-rule handling and did not expose a new live
  `+0x08` consumer.
- `0x8C09B450` reuses the same queue-family helpers (`0x8C079A92`,
  `0x8C09E7E4`, `0x8C079ACE`) in another battle follow-up path, but still only
  surfaced the active test and `+0x0c` value lane, not a recovered `+0x08`
  round-trip.

Data-driven consequence:

- `+0x08` is now the strongest remaining candidate for bomb-critical
  queue-local metadata that is not represented in the already observed live
  `cmd=01 +0x0c` words.
- `0x8C073F36` still looks like the only recovered place where that metadata is
  written, while the sender/receiver evidence continues to expose only the
  `+0x0c` lane.
- that does not yet prove `+0x08` is never serialized elsewhere, but it does
  prove the current recovered live path is incomplete for that field.
- the next trustworthy target is the compact-record family around
  `0x8C075A78/0x8C073F36/0x8C09AC08`, specifically any remaining caller or
  serializer that can explain how `+0x08` reaches the later placed-bomb
  promotion path.

## 2026-04-24 live battle serializer and true local bomb seed tightened

Fresh caller recovery and raw listing work changed the compact-object picture in
an important way: the real local bomb seed is no longer best described by the
old state-4 serializer guess.

Artifacts:

- `D:\kageserver\docs\ghidra_decompile\pass248_serializer_refs`
- `D:\kageserver\docs\ghidra_decompile\pass249_077fce_func`
- `D:\kageserver\docs\ghidra_decompile\pass250_07826a_func`
- `D:\kageserver\docs\ghidra_decompile\pass251_077fce_0785xx_listing`
- `D:\kageserver\docs\ghidra_decompile\pass252_bomb_lifecycle_refs`
- `D:\kageserver\docs\ghidra_decompile\pass253_action_entry_refs`

New proven facts:

- raw reference recovery now gives concrete live battle callers for both sides
  of the compact object lane:
  - `0x8C077FCE -> 0x8C0730A8`
  - `0x8C078204 -> 0x8C0743EC`
  - `0x8C0743EC -> 0x8C075A78`
- the raw SH-4 listing around `0x8C077FCE` proves `0x8C0730A8` runs on the live
  battle path before the dead-bit/update-history branch, not only on an
  endgame-only path.
- `0x8C07F510`, which owns the `Panel %d Chain FLAG_APPEAR Timeout.`,
  `Panel %d Chain FLAG_JUDGE Timeout.`, and `Panel %d was Breaked.` strings, has
  exactly one recovered caller:
  - `0x8C07D38C`
- `0x8C07D38C` already sits in the front-half helper chain of `0x8C0730A8`, so
  the compact serializer and the local bomb/panel lifecycle are directly linked
  inside the same local object pipeline.
- the true local bomb helper `0x8C0906F4` now tightens further:
  - it still has only one recovered direct caller: `0x8C0479D2`
  - `0x8C0479D2` itself still has only one recovered caller: `0x8C0470F4`
  - `0x8C047940` also only resolves back to that same action root
- the key correction is inside `0x8C0906F4`:
  - it allocates a free `0x74`-byte object/panel slot
  - writes large subtype `+0x0A = 0x0E`
  - then writes object state `+0x08 = 0x0A`
- that means the old "state 4 is the true placed-bomb seed" hypothesis was too
  narrow:
  - state `4` in `0x8C0730A8` is a real compact serializer branch with high-byte
    tag `0x40`
  - but the true local bomb helper seeds a state-`0x0A` object, which then
    falls into the generic `0x8C0730A8` serializer path for states other than
    `4/6/7/8/0x0b/0x0c/0x0d`

Data-driven consequence:

- the remaining multiplayer bomb gap is now better described as:
  - networked A-press reaches the queued selector-`0x0E` action path under
    `0x8C0470F4`
  - but it still does not get promoted into the same
    `0x8C0479D2 -> 0x8C0906F4 -> state 0x0A -> 0x8C0730A8 -> 0x8C075A78`
    lifecycle used by the true local placed-bomb path
- this raises confidence in the overall model, but it still does not justify an
  honest `95%+` gameplay test recommendation yet
- the next trustworthy reverse-engineering target is the promotion step from
  the queued selector-`0x0E` network path into the true local bomb seed, not
  another compact object tag guess or live relay tweak

## 2026-04-24 compact object encoder and state-0x0A serializer boundary

Fresh raw listing work tightened the compact object story again and removed one
more place where we could have guessed wrong.

Artifacts:

- `D:\kageserver\docs\ghidra_decompile\pass254_0844d4_refs`
- `D:\kageserver\docs\ghidra_decompile\pass255_0844d4_callers`
- `D:\kageserver\docs\ghidra_decompile\pass258_state0a_branch_full`
- `D:\kageserver\docs\ghidra_decompile\pass259_0730a8_prefix`
- `D:\kageserver\docs\ghidra_decompile\pass137_compact_listings\8c0dd740_8c0dd850.lst`

New proven facts:

- the raw action root listing at `0x8C0470F4` still directly proves the network
  split:
  - opcode `1` with local `+0x0163 bit 0x40` clear goes to `0x8C0479D2`
  - opcode `1` with that bit set appends selector `0x0E` into the queued table
    instead
- `0x8C0844D4` is no longer a trustworthy placed-bomb target:
  - fresh caller recovery shows it is shared by other object/effect creators,
    not only by `0x8C073F36`
  - its object family is `0x88` bytes wide, which does not match the true
    `0x74`-byte local bomb/panel slot family created by `0x8C0906F4`
- the compact network encoder `0x8C0DD74E` is now raw-listing-confirmed:
  - first compact word is repacked from the source entry's first word
  - second compact word packs:
    - selector nibble from key `0x0004`
    - bits `11..8` from source byte `+0x03` low nibble
    - bits `7..4` from key `0x0404`
    - bit `3` from source byte `+0x02 bit 3`
    - bits `2..1` from key `0x0D02`
    - bit `0` from source byte `+0x02 bit 0`
- the generic `0x8C0730A8` state branch for object state `0x0A` is now bounded
  more precisely:
  - it writes selector/state nibble through `0x8C09E790(..., key 0x0004, out+2)`
  - it writes the adjacent 4-bit field through
    `0x8C09E7C8(obj+9, key 0x0004)` followed by
    `0x8C09E790(..., key 0x0404, out+2)`
  - it does not construct the full 4-byte compact record from scratch
- this means the remaining bytes of the compact state-`0x0A` object record are
  already seeded earlier in `0x8C0730A8` before the state-specific branch runs

Data-driven consequence:

- the next missing step is narrower than before:
  - not "guess another compact object family"
  - not "reuse `0x8C0844D4` as if it were the true bomb object path"
  - but specifically the pre-seeded compact record bytes that exist before the
    state-`0x0A` branch overwrites selector and adjacent nibble fields
- this materially strengthens the model for a future fix, but it still does not
  justify an honest `95%+` gameplay-test recommendation yet
