#include "payload.h"
#include <stdio.h>

int payload_encode(char *buf, size_t len, const char *node, float temp_c, float humidity) {
    int n = snprintf(buf, len, "{\"node\":\"%s\",\"temp_c\":%.1f,\"humidity\":%.1f}", node, temp_c, humidity);
    return (n < 0 || (size_t)n >= len) ? -1 : n;
}
