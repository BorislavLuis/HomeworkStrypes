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
    char temp = 'a';
    unsigned int section = 0;
    unsigned int ctr = 0;
    unsigned int ctr2 = 0;
    bubleSort(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        for (int k = 0; k < sz; k++)
        {
            if (arr[i] == arr[k] && i!=k)
            {
                ctr++;
                temp = arr[i];
            }
        }
        if (ctr2 < ctr)
        {
            ctr2 = ctr;
            result = temp;
        }
        ctr = 0;
    }
    return result;
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubleSort(const char* arr, size_t n)
{
    if (n > 2)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    swap(&arr[i], &arr[j]);
                }
            }
        }
    }

}