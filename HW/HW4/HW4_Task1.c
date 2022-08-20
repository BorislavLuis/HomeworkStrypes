#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <string.h>

int secondMax(const int* arr, size_t n, int* secondMax);
void bubleSort(const int* arr,size_t n);
void swap(int* a, int* b);
int main()
{
    int arr[] = { 12, 34, 5, 70, 46 };
    int second;
    bubleSort(arr, 5);
    if (!secondMax(arr, 5, &second))
    {
        printf("Second maximum number is: %d", second);
    }
    return 0;
}


int secondMax(const int* arr, size_t n, int* secondMax)
{
    int verification = 0;
    if (n < 1)
    {
        printf("Empty array!");
        return -1;
    }
    else if (n == 1)
    {
        printf("Array has only one element");
        return -1;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] == arr[i])
            {
                verification++;
            }
        }
    }
    if (verification == n-1)
    {
        printf("The number in an array are all equal!");
        return -1;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] != arr[i])
            {
                *secondMax = arr[i];
                break;
            }
        }
        
    }
    return 0;
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubleSort(const int* arr, size_t n)
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