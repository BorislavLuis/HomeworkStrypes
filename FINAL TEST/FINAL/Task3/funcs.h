#ifndef FUNCS_H
#define FUNCS_H

#include <stdint.h>
#include <stdlib.h>
typedef struct node
{
	uint64_t data;
	struct node* next;
} node_t;

void push(node_t** head, uint64_t value);
void listFree(node_t** list);
void printList(node_t* head);
node_t* maxElement(node_t* head);
uint64_t setedBitsSum(node_t* head);

#endif // !_FUNCS_H
