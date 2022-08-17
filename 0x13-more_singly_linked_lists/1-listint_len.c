#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - prints number of` elements in a list
 *
 * @h: the list
 *
 * Return: returns a value
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
