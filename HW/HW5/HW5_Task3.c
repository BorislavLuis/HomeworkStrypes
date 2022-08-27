#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int n,m,p;
    time_t t;

    srand((unsigned)time(&t));

    scanf("%u", &n);
    float* f = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        f[i] = (float)rand()/(float)RAND_MAX;
    }
    scanf("%u", &m);
    f = realloc(f, (n + m) * sizeof(float));
    for (int i = n; i < m + n; i++)
    {
        f[i] = 1.0 + (float)(rand() / (float)(RAND_MAX ));
    }
    scanf("%u", &p);
    f = realloc(f, (n + m + p) * sizeof(float));
    for (int i = n+m; i < m + n + p; i++)
    {
        f[i] = 2.0 + (float)(rand() / (float)(RAND_MAX));
    }
    for (int i = 0; i < n+m+p; i++)
    {
        printf("%0.2f\n",f[i]);
    }

    free(f);
    return 0;
}