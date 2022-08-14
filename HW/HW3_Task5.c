#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdint.h>

unsigned int onesCount(uint64_t* mask)
{
	int result=0;
	for (int i = 0; i < 64; i++)
	{
		if (*mask & ((uint64_t)1 << i))
		{
			result++;
		}
	}
	return result;
}
int main()
{
	uint64_t var;
	scanf("%lld", &var);
	printf("Ones in the variable are: %d", onesCount(&var));
	return 0;
}