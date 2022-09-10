#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#define COUNT 20
#include <stdio.h>
#include <time.h>
#include "funcs.h"

int main()
{
	time_t t;

	srand((unsigned)time(&t));
	//srand(time(NULL));
	node_t* head = NULL;
	for (int i = 0; i < COUNT-1; i++)
	{
		uint64_t number = (uint64_t)rand() % UINT64_MAX;
		push(&head, number);
	}
	listFree(head);
	return 0;
}