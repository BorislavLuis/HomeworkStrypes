#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdint.h>

void setbit(uint64_t* mask,int bit)
{
	if (bit >= 0 && bit <= 64)
	{
		*mask |= (1 << bit);
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
		*mask &= ~(1 << bit);
	}
	else
	{
		printf("There is no student with this number!\n");
	}
}
void checkbit(uint64_t* mask,int bit)
{
	if (*mask & (1 << bit))
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
		*mask ^= (1 << bit);
	}
	else
	{
		printf("There is no student with this number!\n");
	}
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

	}
	return 0;
}