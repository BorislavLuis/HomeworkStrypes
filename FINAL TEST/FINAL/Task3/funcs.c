#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "funcs.h"
#include <stdio.h>
#define CHECKBIT(mask,bit) !!(mask & (1ull << (bit)))

void push(node_t** head, uint64_t value) {
    node_t* newNode = malloc(sizeof(node_t));
    newNode->data = value; //(*newNode).data
    newNode->next = *head;
    *head = newNode;
}

void printList(node_t* head) {
    node_t* current = head;
    while (current != NULL) {
        printf("%lu\n", current->data);
        current = current->next;
    }
}

void listFree(node_t** list) {
    node_t* current = *list, * prev;
    while (current) {
        prev = current;
        current = current->next;
        free(prev);
    }
    *list = NULL;
}
node_t* maxElement(node_t* head)
{
    uint64_t max = 0;
    node_t* ret = NULL;
    node_t* current = head;
    while (current != NULL) {
        if (current->data > max)
        {
            max = current->data;
            ret = current;
        }
        current = current->next;
    }
    return ret;
}
uint64_t setedBitsSum(node_t* head)
{
    uint64_t result = 0;
    node_t* current = head;
    while (current != NULL) {
        for (int i = 0; i < 64; i++)
        {
            if (CHECKBIT(current->data,i))
            {
                result++;
            }
        }
        current = current->next;
    }
    return result;
}