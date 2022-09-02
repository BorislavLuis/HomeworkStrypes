#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void Add(const char* p1, const char* p2, char* result);

int main()
{
	char* op1 = "25";
	char* op2 = "55";
	char res[50];
	Add(op1, op2, res);
	printf("%s", res);
	return 0;
}

void Add(const char* p1, const char* p2, char* result)
{
	int num1 = atoi(p1);
	int num2 = atoi(p2);
	int sum = num1 + num2;
	result = itoa(sum,result,10);
}