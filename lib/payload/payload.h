#ifndef SENSOR_MESH_PAYLOAD_H
#define SENSOR_MESH_PAYLOAD_H
#include <stddef.h>

/* Encode one reading as JSON. Returns bytes written (excluding NUL), or -1 if buf is too small. */
int payload_encode(char *buf, size_t len, const char *node, float temp_c, float humidity);

#endif
