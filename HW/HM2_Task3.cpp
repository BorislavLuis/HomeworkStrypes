#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>

float comparison(float a1, float a2, float a3)
{
	float biggest;
	if (a1 > a2 && a1 > a3)
	{
		biggest = a1;
	}
	else if (a2 > a1 && a2 > a3)
	{
		biggest = a2;
	}
	else if (a3 > a1 && a3 > a1)
	{
		biggest = a3;
	}
	return biggest;
}

int main()
{
	float a1, a2, a3;
	printf("N1 = ");
	scanf("%f", &a1);
	printf("N2 = ");
	scanf("%f", &a2);
	printf("N3 = ");
	scanf("%f", &a3);
	
	printf("%f", comparison(a1, a2, a3));

	FILE* fp;
	fp = fopen("numbers.txt", "r");
	if (fp == NULL)
	{
		printf("File can not be open!");
	}
	else
	{
		fscanf(fp, "%f%f%f", &a1,&a2,&a3);
		printf("\n%f", a1);
		printf("\n%f", a2);
		printf("\n%f", a3);
		fclose(fp);
	}

	return 0;
}