#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

unsigned long long int sumArrayDigits(const int* arr, size_t n);

int main()
{
    int arr[] = { 12, 34, 5, 70 };
    printf("Sum of all digits is = %llu\n",sumArrayDigits(arr, 4));
    return 0;
}


unsigned long long sumArrayDigits(const int* arr, size_t n)
{
    unsigned long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = arr[i];
        while (digit != 0)
        {
            int num = digit % 10;
            digit /= 10;
            sum += num;
        }
    }
    return sum;
}