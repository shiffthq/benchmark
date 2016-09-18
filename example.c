#include <stdio.h>
#include <stdint.h>
#include "benchmark.h"

int main() {
    uint32_t i = 0;
    uint32_t count = 1 << 31;
    double begin, end;

    begin = get_real_time();
    for (i = 0; i < count; i++) {
    }
    end = get_real_time();
    printf("%f\n", end - begin);

    begin = get_cpu_time();
    for (i = 0; i < count; i++) {
    }
    end = get_cpu_time();
    printf("%f\n", end - begin);
    return 0;
}
