# sensor-mesh

> ESP32 sensor firmware that publishes readings over MQTT, with a host-testable core.

Cheap sensors, real telemetry: ESP32 nodes read environment sensors and publish JSON over MQTT to a broker the fleet can observe.

**Status:** foundation (phase 1). Part of the [bamr87 fleet](https://github.com/bamr87/bamr87).

## Goals

- PlatformIO firmware for ESP32 publishing sensor readings over MQTT
- Host-testable payload/encoding core in portable C
- Bridge readings into fleet-observe dashboards

## Skills learned

- Embedded C on ESP32 (ESP-IDF/Arduino)
- MQTT and IoT messaging
- Power management and OTA updates
- Hardware-in-the-loop testing

## Fleet tie-in

Feeds sensor metrics into fleet-observe and fleet-mobile; deployable broker on fleet-infra.

## Quick start

```bash
host test via gcc (see CI); firmware: pio run
```

## How it grows

The roadmap lives in [PRD.md](PRD.md) and [features/features.yml](features/features.yml) (ids `SMESH-NNN`, most `status: planned`). Work arrives as pull requests from the hub's evolution and fan-out loops, the `@claude` handler, or the local `evolve` lane (off until `EVOLVE_ENABLED=true`). A human merges every PR. Rules: [docs/constitution.md](docs/constitution.md) · agent guide: [AGENTS.md](AGENTS.md).

## License

[MIT](LICENSE)
