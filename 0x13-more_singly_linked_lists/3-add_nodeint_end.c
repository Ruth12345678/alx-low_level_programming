#include "lists.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: pointer to a node
 *
 * @n: data
 *
 * Return: returns a value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newn;

	temp = *head;
	while (temp && temp->next != NULL)
	{
		temp = temp->next;
	}
	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
	{
		free(newn);
		return (NULL);
	}
	newn->n = n;
	newn->next = NULL;
	if (temp)
		temp->next = newn;
	else
	{
		*head = newn;
	}
	return (newn);
}
