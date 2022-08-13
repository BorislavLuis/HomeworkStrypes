#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdint.h>

// One method to set bit
/*switch (bit)
{
	case 1: *mask |= 0x1; break;
	case 2: *mask |= 0x2; break;
	case 3: *mask |= 0x4; break;
	case 4: *mask |= 0x8; break;
	case 5: *mask |= 0x10; break;
	case 6: *mask |= 0x20; break;
	case 7: *mask |= 0x40; break;
	case 8: *mask |= 0x80; break;
	case 9: *mask |= 0x100; break;
	case 10: *mask |= 0x200; break;
	case 11: *mask |= 0x400; break;
	case 12: *mask |= 0x800; break;
	case 13: *mask |= 0x1000; break;
	case 14: *mask |= 0x2000; break;
	case 15: *mask |= 0x4000; break;
	case 16: *mask |= 0x8000; break;
	case 17: *mask |= 0x10000; break;
	case 18: *mask |= 0x20000; break;
	case 19: *mask |= 0x40000; break;
	case 20: *mask |= 0x80000; break;
	case 21: *mask |= 0x100000; break;
	case 22: *mask |= 0x200000; break;
	case 23: *mask |= 0x400000; break;
	case 24: *mask |= 0x800000; break;
	case 25: *mask |= 0x1000000; break;
	case 26: *mask |= 0x2000000; break;
	case 27: *mask |= 0x4000000; break;
	case 28: *mask |= 0x8000000; break;
	case 29: *mask |= 0x10000000; break;
	case 30: *mask |= 0x20000000; break;
	case 31: *mask |= 0x40000000; break;
	case 32: *mask |= 0x80000000; break;
	case 33: *mask |= 0x100000000; break;
	case 34: *mask |= 0x200000000; break;
	case 35: *mask |= 0x400000000; break;
	case 36: *mask |= 0x800000000; break;
	case 37: *mask |= 0x1000000000; break;
	case 38: *mask |= 0x2000000000; break;
	case 39: *mask |= 0x4000000000; break;
	case 40: *mask |= 0x8000000000; break;
	case 41: *mask |= 0x10000000000; break;
	case 42: *mask |= 0x20000000000; break;
	case 43: *mask |= 0x40000000000; break;
	case 44: *mask |= 0x80000000000; break;
	case 45: *mask |= 0x100000000000; break;
	case 46: *mask |= 0x200000000000; break;
	case 47: *mask |= 0x400000000000; break;
	case 48: *mask |= 0x800000000000; break;
	case 49: *mask |= 0x1000000000000; break;
	case 50: *mask |= 0x2000000000000; break;
	case 51: *mask |= 0x4000000000000; break;
	case 52: *mask |= 0x8000000000000; break;
	case 53: *mask |= 0x10000000000000; break;
	case 54: *mask |= 0x20000000000000; break;
	case 55: *mask |= 0x40000000000000; break;
	case 56: *mask |= 0x80000000000000; break;
	case 57: *mask |= 0x100000000000000; break;
	case 58: *mask |= 0x200000000000000; break;
	case 59: *mask |= 0x400000000000000; break;
	case 60: *mask |= 0x800000000000000; break;
	case 61: *mask |= 0x1000000000000000; break;
	case 62: *mask |= 0x2000000000000000; break;
	case 63: *mask |= 0x4000000000000000; break;
	case 64: *mask |= 0x8000000000000000; break;
}*/
void setbit(uint64_t* mask,int bit)
{
	if (bit >= 0 && bit <= 64)
	{
		*mask |= ((uint64_t)1 << bit-1);
	}
	else
	{
		printf("There is no student with this number!\n");
	}
}
void resetbit(uint64_t* mask, int bit)
{
	if (bit >= 0 && bit <= 64)
	{
		*mask &= ~((uint64_t)1 << bit-1);
	}
	else
	{
		printf("There is no student with this number!\n");
	}
}
void checkbit(uint64_t* mask,int bit)
{
	if (*mask & ((uint64_t)1 << bit-1))
	{
		printf("Student has attendance! \n");
	}
	else
	{
		printf("Student has not attendance!\n");
	}
}
void toggle(uint64_t* mask, int bit)
{
	if (bit >= 0 && bit <= 64)
	{
		*mask ^= ((uint64_t)1 << bit-1);
	}
	else
	{
		printf("There is no student with this number!\n");
	}
}

void showAllInClass(uint64_t* mask)
{
	printf("Students with number ");
	for (int i = 0; i < 64; i++)
	{
		if (*mask & ((uint64_t)1 << i))
		{
			printf("%d,", i+1);
		}
	}
	printf(" are in class!\n");
}
void showAllMissing(uint64_t* mask)
{
	printf("Students with number ");
	for (int i = 0; i < 64; i++)
	{
		if (!(*mask & ((uint64_t)1 << i)))
		{
			printf("%d,", i+1);
		}
	}
	printf(" are missing from class!\n");
}

int main()
{
	uint64_t attendance = 0;
	int option = 0;
	int stnum = 0;
	while (option != 5)
	{
		printf("1. Set attendance\n");
		printf("2. Clear attendance\n");
		printf("3. Attendance info\n");
		printf("4. Change attendance\n");
		printf("5. Exit\n");
		scanf("%d", &option);
		if (option != 5)
		{
			printf("Student number: ");
			scanf("%d", &stnum);
		}
		switch (option)
		{
		case 1:
				setbit(&attendance, stnum);
			break;
		case 2:
				resetbit(&attendance, stnum);
			break;
		case 3:
				checkbit(&attendance, stnum);
			break;
		case 4:
				toggle(&attendance, stnum);
			break;
		case 5:
			break;
		}
		showAllInClass(&attendance);
		showAllMissing(&attendance);
	}
	return 0;
}