// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    return n != 1 ? x * power(x, n-1) : x;
}
