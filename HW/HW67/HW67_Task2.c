#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

void Reverse(char* ptr);

int main()
{
	char str[] = "This is a test";
	Reverse(str);
	printf("%s", str);
	return 0;
}

void Reverse(char* ptr)
{
	int n = 0;
	int inc = 0;
	char* begin = ptr;
	char* end = ptr;
	char temp;
	while (ptr[n] != '\0')
	{
		n++;
	}
	for (int i = 0; i < n-1; i++) end++;
	for (int i = 0; i < n/2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
