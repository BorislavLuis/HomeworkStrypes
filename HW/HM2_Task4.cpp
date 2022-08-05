#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1, a2,a3;
	printf("N1 = ");
	scanf("%d", &a1);
	printf("N2 = ");
	scanf("%d", &a2);

	printf("XOR: %d\n", a1 ^ a2);

	FILE* fp;
	fp = fopen("numbers2.txt", "r");
	if (fp == NULL)
	{
		printf("File can not be open!");
	}
	else
	{
		fscanf(fp, "%d%d%d", &a1, &a2, &a3);
		printf("XOR: %d\n", a1 ^ a2 ^ a3);
		fclose(fp);
	}

	return 0;
}