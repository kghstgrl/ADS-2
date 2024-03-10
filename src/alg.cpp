// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double result = 1.0;
    for (uint16_t i = 0; i < n; i++) {
        result *= value;
        }
    return result;
}

uint64_t fact(uint16_t n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double sum = 1.0;
    for (uint16_t n = 1; n <= count; n++) {
        sum += pown(x, n) / fact(n);
    }
    return sum;
}

double sinn(double x, uint16_t count) {
    double sum = 0.0;
    for (uint16_t n = 0; n < count; n++) {
        sum += ((n % 2 == 0) ? 1 : -1) * pown(x, 2 * n + 1) / fact(2 * n + 1);
    }
    return sum;
}

double cosn(double x, uint16_t count) {
    double sum = 0;
    for (uint64_t n = 1; n <= count; n++) {
    sum += calcItem(x, (2 * i) - 2) * pown(-1, i-1);
    }
    return sum;
}
