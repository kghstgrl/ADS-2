// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double result = 1.0;
    for (uint16_t i = 0; i < n; i++) {
        result = result * value;
        }
    return result;
}

uint64_t fact(uint16_t n) {
    uint64_t result = 1;
    for (uint16_t i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}


double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double sum = 1.0;
    for (uint16_t i = 1; i <= count; i++) {
        sum += pown(x, i) / fact(i);
    }
    return sum;
}

double sinn(double x, uint16_t count) {
    double sum = 0.0;
    for (uint16_t i = 0; i < count; i++) {
        sum += ((i % 2 == 0) ? 1 : -1) * pown(x, 2 * i + 1) / fact(2 * i + 1);
    }
    return sum;
}

double cosn(double x, uint16_t count) {
    double sum = 1.0;
    double ns = -1.0;
    for (uint16_t i = 1; i <= count; i++) {
        double result = ns * pown(x, 2 * i) / fact(2 * i);
        sum = sum + result;
        ns *= -1.0;
        double sum = 0;
    }
    for (uint64_t i = 1; i <= count; i++) {
        sum += calcItem(x, (2 * i) - 2) * pown(-1, i-1);
    }
    return sum;
}
