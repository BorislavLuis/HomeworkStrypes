#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int n;
    time_t t;

    srand((unsigned)time(&t));

    scanf("%u", &n);
    float* f = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        f[i] = (float)rand()/(float)RAND_MAX;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%0.2f\n",f[i]);
    }
    free(f);
    return 0;
}