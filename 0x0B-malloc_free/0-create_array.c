#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array and initializes it
 *
 * @size: array size
 *
 * @c: specifi char
 *
 * Return: returns a value
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
		for (n = 0; n < size; n++)
		{
			arr[n] = c;
		}
		if (arr == NULL)
		{
			return (arr);
		}
		else
		{
			return (arr);
		}
	}
	else
	{
		return NULL;
	}
}
