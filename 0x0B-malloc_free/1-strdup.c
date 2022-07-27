#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - returns a pointer to a copy of a string
 *
 * @str: string to be copied
 *
 * Return: returns a pointer to a string
 */

char *_strdup(char *str)
{
	char *stra;
	int a, alen = strlen(str) + 1;

	a = 0;
	if (str != NULL)
	{
		stra = malloc(sizeof(stra) * 1);
		if (stra != NULL)
		{
			for (a = 0; a < alen; a++)
			{
				stra[a] = str[a];
			}
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		printf("Failed to allocate memory after %d calls", a);
		return (NULL);
	}
	return (stra);
}
