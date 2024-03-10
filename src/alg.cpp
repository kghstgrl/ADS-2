// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    if (n == 0)
        return 1;
    double result = value;
    for (uint16_t i = 1; i < n; i++) {
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
        int sign = (n % 2 == 0) ? 1 : -1;
        sum += sign * pown(x, 2 * n + 1) / fact(2 * n + 1);
    }
    return sum;
}

double cosn(double x, uint16_t count) {
    double sum = 1.0;
    for (uint16_t n = 1; n <= count; n++) {
        sum += ((n % 2 == 0) ? 1 : -1) * pown(x, 2 * n) / fact(2 * n);
    }
    return sum;
}
