#ifdef _MSC_VER
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

unsigned int BinSearch(unsigned int* pArray, unsigned int uArraySize, unsigned int uValue);
void Bubble(int* pArray, unsigned int uLen);
void swap(int* a, int* b);

int main()
{
    unsigned int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    printf("Index is %d\n", BinSearch(arr1, 12, 9));
    unsigned int arr2[] = { 55,66,78,34,53,21,33,99,23,25,68 };
    printf("Index is %d\n",BinSearch(arr2, 11, 33));
	return 0;
}

unsigned int BinSearch(unsigned int* pArray, unsigned int uArraySize, unsigned int uValue)
{
    unsigned int max = uArraySize;
    unsigned int min = 0;
    unsigned int point = max / 2;
    unsigned int ret=0;
    Bubble(pArray, uArraySize);
    while (pArray[point] != uValue)
    {
        if (pArray[point] > uValue)
        {
            max = point;
            point = (min+max)/2;
            if (pArray[point] == uValue) ret = point;
        }
        else if (pArray[point] < uValue)
        {
            min = point;
            point = (min + (max / 2))-1;
            if (pArray[point] == uValue) ret = point;
        }
        else
        {
            ret = point;
            continue;
        }
    }
    return ret;
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