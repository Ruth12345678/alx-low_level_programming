#ifndef LISTS_H
#define LISTS_H

#include<stdlib.h>

typedef struct listint_a
{
	int n;
	struct listint_a *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
