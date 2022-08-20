#include "lists.h"
#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to an address
 *
 * @n: data
 *
 * Return: returns a value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
