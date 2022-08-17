#ifndef LISTS_H
#define LISTS_H

#include<stdlib.h>
/**
 * struct listint_a - linked list syntax
 * @n : integer value
 *
 * @next: pointer to next node
 */

typedef struct listint_a
{
	int n;
	struct listint_a *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
