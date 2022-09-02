#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void Bubble(int* pArray, unsigned int uLen);
void swap(int* a, int* b);
int main()
{
    int arr[10] = { 56,35,21,66,45,99,23,19,100,29};
    Bubble(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d-", arr[i]);
    }
    return 0;
}

void Bubble(int* pArray, unsigned int uLen)
{
    if (uLen > 1)
    {
        for (int i = 0; i < uLen; i++)
        {
            for (int j = 0; j < uLen; j++)
            {
                if (pArray[i] < pArray[j])
                {
                    swap(&pArray[i], &pArray[j]);
                }
            }
        }
    }

}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}