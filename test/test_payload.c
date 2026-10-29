#include <stdio.h>
#include <string.h>
#include "payload.h"

int main(void) {
    char buf[128];
    int n = payload_encode(buf, sizeof buf, "n1", 21.5f, 40.0f);
    if (n < 0 || strcmp(buf, "{\"node\":\"n1\",\"temp_c\":21.5,\"humidity\":40.0}") != 0) {
        printf("FAIL: %s\n", buf);
        return 1;
    }
    char tiny[4];
    if (payload_encode(tiny, sizeof tiny, "n1", 0, 0) != -1) { puts("FAIL: overflow"); return 1; }
    puts("ok");
    return 0;
}
