#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <time.h>
#define MAX_SIZE 50
int arr[MAX_SIZE];
int* top = &arr;
int* roller = &arr;
int* poper = &arr;
int* bottom = &arr[MAX_SIZE];

int isEmpty();
int isFull();
void Push(int newValue);
int Pop();

int main()
{
	//*top = NULL;
	srand(time(NULL));

	for (int i = 0; i < MAX_SIZE-1; i++)
	{
		Push(rand());
	}
	Push(22);
	Push(26);
	for (int i = 0; i <= MAX_SIZE; i++)
	{
		printf("%d\n",Pop());
	}
	printf("%d\n",Pop());
	return 0;
}

int isEmpty()
{
	if (poper == roller)
	{
		poper = top;
		roller = top;
		return 0;
	}
	return 1;
}
int isFull()
{
	if (roller == bottom)
	{
		printf("Queue is full! \n");
		return 0;
	}
	return 1;
}
void Push(int newValue)
{
	if (!isFull()) return;
	if (isEmpty())
	{
		*roller = newValue;
		roller++;
	}
	else
	{
		*top = newValue;
		roller++;
	}
}
int Pop()
{
	if (!isEmpty())
	{
		printf("Queue is empty! ");
		return NULL;
	}
	int val = *poper;
	poper++;
	return val;
}