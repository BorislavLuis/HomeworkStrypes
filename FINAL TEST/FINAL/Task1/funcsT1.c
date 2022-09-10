#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "funcsT1.h"

void printElements(const char* arr, size_t sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
unsigned int smallLettersCount(const char* arr, size_t sz)
{
    unsigned int result=0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            result++;
        }
    }
    return result;
}
char mostCommonSymbol(const char* arr, size_t sz)
{
    char result='a';

    return result;
}
