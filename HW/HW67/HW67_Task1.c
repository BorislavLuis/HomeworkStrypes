#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

unsigned char CheckBit(unsigned int uValue);

int main()
{
	unsigned int number = 0x80000000;
	printf("The number has exactly one bit set (1-true,0-false): %c\n", CheckBit(number));
	return 0;
}

unsigned char CheckBit(unsigned int uValue)
{
	int n = sizeof(int)*8;
	int times = 0;
	for (int i = 0; i < n; i++)
	{
		if (uValue & 1 << i)
		{
			times++;
		}
	}
	if (times == 1)
	{
		return '1';
	}
	return '0';
}