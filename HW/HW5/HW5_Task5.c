#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include "HW5_Task5_funcs.h"

int main()
{
    float degrees;
    scanf("%f", &degrees);
    printf("Sine of %f is %0.2f",degrees,sine(degrees));
    return 0;
}