<!-- kit: governance v0.1.0 -->
# 0002 — Missions

- **Status:** proposed
- **Date:** 2026-11-16
- **Proposed by:** Grok Bot (agent), at the maintainer's request
- **Ratified by:**
- **Affects:** constitution §1; PRD §1.1; feature SMESH-008
- **Supersedes:** none
- **Related:** [PRD.md](../../PRD.md) §1.1; feature SMESH-008

## Context

Constitution §1 Mission was a product description (or, for a new constitution, had not been written yet), not a three-mission direction statement. The fleet now requires every repo's constitution §1 to be one direction statement followed by exactly three numbered missions, adopted through a numbered amendment the maintainer ratifies by merging. The maintainer asked for those missions to be comprehensive and epic: Sensor Mesh as the ultimate open home for all things open sensor telemetry. Mission 1 follows the maintainer's wording, adapted to this domain: provide data, tools, resources and transparency for all stakeholders, domain practitioners and the general public. The ambition is the direction, not a claim that the work is already finished. The missions are aligned with this repo's existing constitution and PRD.

## Amendment

Replace constitution §1 with the following, retitled **Missions**:

Sensor Mesh's direction is to become the ultimate open home for all things open sensor telemetry — data, tools, resources and transparency, gathered in one place that anyone can inspect and reuse.

1. **Provide data, tools, resources and transparency for all stakeholders, embedded and IoT practitioners, and the general public.** Firmware authors, operators and anyone reading a room's sensors are first-class audiences. The aim is a shared, inspectable commons: the same firmware, the same JSON, and the same broker path for everyone.
2. **Let inexpensive ESP32 nodes read environment sensors and publish clear JSON over MQTT to a broker anyone can observe, with a host-testable core so firmware can be verified off-device.** Cheap hardware should still produce real, structured telemetry that can be tested without flashing a board first.
3. **Feed that telemetry into the fleet's observe and mobile surfaces, and keep a deployable broker on fleet-infra, so sensor data stays open, inspectable and reusable.** A reading should travel from the node to the people who need it without disappearing into a proprietary cloud.

These missions set the course; they do not claim the work is finished. They serve the PRD's learning-first path: ESP32 nodes, MQTT JSON, and a host-testable core that can feed fleet-observe, fleet-mobile and a broker on fleet-infra.

_Source: [PRD.md](../PRD.md) §1.1._


## Consequences

Agents and reviewers judge fit against these three missions before inventing scope, treating them as the direction of the repo rather than a description of what already ships. The same text is added as PRD §1.1 so the constitution's `_Source:` line stays accurate. The original PRD purpose / overview paragraph is left in place. This PR also aligns the README and AGENTS.md taglines with the missions and links them to constitution §1, and adds feature SMESH-008 to the feature catalog, traced to requirement MR1. Merging this PR ratifies amendment 0002. Until then the record stays `Status: proposed`.
