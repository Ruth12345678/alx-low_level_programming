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
	int a = 0;

	if (str != NULL)
	{
		int alen = strlen(str) + 1;
		stra = malloc(alen);
		if (stra != NULL)
		{
			for (a = 0; a < alen; a++)
			{
				stra[a] = str[a];
			}
		}
		else
		{
			printf("failed to allocate memory after %d calls", a);
			return (NULL);
		}
	}
	else if (str == NULL)
	{
		printf("failed to allocate memory after %d calls 2.", a);
		return (NULL);
	}
	return (stra);
}
