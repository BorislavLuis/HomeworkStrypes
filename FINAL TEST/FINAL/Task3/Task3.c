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
	node_t* biggestElement = NULL;
	for (int i = 0; i < COUNT; i++)
	{
		uint64_t number = (uint64_t)rand() % UINT64_MAX;
		push(&head, number);
	}
	biggestElement = maxElement(head);
	printList(head);
	printf("Biggest element in the list = %llu\n", biggestElement->data);
	printf("Onces which are set = %llu", setedBitsSum(head));
	listFree(head);
	return 0;
}