#include "bug.h"

volatile uint8_t BUF[16];

int sum_u8(const uint8_t* p, size_t n){
    int s = 0;
    for(size_t i = 0; i < n; i++){
        s += p[i];
    }
    return s;
}

void write_tail(size_t idx, uint8_t v){
    uint8_t* q = (uint8_t*)BUF;
    q[idx] = v;
}
