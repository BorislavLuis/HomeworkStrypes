#include "HW5_Task5_funcs.h"

float sine(int deg) {
    deg %= 360; 
    float rad = deg * PI / 180;
    float sin = 0;

    int i;
    for (i = 0; i < TERMS; i++) { 
        sin += power(-1, i) * power(rad, 2 * i + 1) / fact(2 * i + 1);
    }
    return sin;
}

float cosine(int deg) {
    deg %= 360; 
    float rad = deg * PI / 180;
    float cos = 0;

    int i;
    for (i = 0; i < TERMS; i++) { 
        cos += power(-1, i) * power(rad, 2 * i) / fact(2 * i);
    }
    return cos;
}

float power(float base, int exp) {
    if (exp < 0) {
        if (base == 0)
            return -0; 
        return 1 / (base * power(base, (-exp) - 1));
    }
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    return base * power(base, exp - 1);
}

int fact(int n) {
    return n <= 0 ? 1 : n * fact(n - 1);
}