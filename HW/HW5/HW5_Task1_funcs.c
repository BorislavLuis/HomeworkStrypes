#include "HW5_Task1_funcs.h"

int maxThree(int x, int y, int z)
{
	if (x > y && x > z)
	{
		return x;
	}
	else if (y > x && y > z)
	{
		return y;
	}
	return z;
}
int minThree(int x, int y, int z)
{
	if (x < y && x < z)
	{
		return x;
	}
	else if (y < x && y < z)
	{
		return y;
	}
	return z;
}