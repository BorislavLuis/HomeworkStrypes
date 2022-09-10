#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	unsigned int n,m,k;
    size_t arrSize = 0;
	scanf("%u", &n);
	char* arr = malloc(n*sizeof(char));
    for (int i = 0; i < n; i++)
    {
        char c = rand() % ('z' - 'a') + 'a';
        arr[i] = c;
    }
    scanf("%u", &m);
    arr = realloc(arr, (n + m) * sizeof(char));
    for (int i = n; i < m + n; i++)
    {
        char c = rand() % ('Z' - 'A') + 'A';
        arr[i] = c;
    }
    scanf("%u", &k);
    arr = realloc(arr, (n + m + k+1) * sizeof(char));
    for (int i = n + m; i < m + n + k; i++)
    {
        char c = rand() % ('-' - '!') + '!';
        arr[i] = c;
    }
    arr[m + n + k + 1] = '\0';
    arrSize = m + n + k + 1;
    printElements(arr, arrSize);
    printf("%u\n", smallLettersCount(arr, arrSize));
    printf("%c\n", mostCommonSymbol(arr, arrSize));
	free(arr);
	return 0;
}