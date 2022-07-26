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
	int a;

	a = 0;
	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr != NULL)
		{
			for (n = 0; n < size; n++)
			{
				arr[n] = c;
			}
		}
		else
		{
			printf("Can't allocate %i bytes (after %i calls)\n", size, a);
			return (arr);
		}
	}
	else
	{
		return (NULL);
	}
	return (arr);
}
