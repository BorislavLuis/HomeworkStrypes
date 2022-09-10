#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
	//srand(time(NULL));
	unsigned int n,m,k;
	scanf("%u", &n);
	char* arr = malloc(n*sizeof(char));
    for (int i = 0; i < n; i++)
    {
        char c = (char)rand() % ('z' - 'a') + 'a';
        arr[i] = c;
    }
    scanf("%u", &m);
    arr = realloc(arr, (n + m) * sizeof(char));
    for (int i = n; i < m + n; i++)
    {
        char c = (char)rand() % ('Z' - 'A') + 'A';
        arr[i] = c;
    }
    scanf("%u", &k);
    arr = realloc(arr, (n + m + k) * sizeof(char));
    for (int i = n + m; i < m + n + k; i++)
    {
        char c = (char)rand() % ('-' - '!') + '!';
        arr[i] = c;
    }
    for (int i = 0; i < n + m + k; i++)
    {
        printf("%c\n", arr[i]);
    }
	free(arr);
	return 0;
}