#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);
    
    float sqrt, temp=0;
    sqrt = number / 2;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (number / temp + temp) / 2;
    }
    printf("%0.2f", sqrt);
    return 0;
}