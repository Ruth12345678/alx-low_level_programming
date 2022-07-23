#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strspn - gets length of a prefix substring
 *
 * @s: string to be searched
 *
 * @accept: search parameters
 *
 * Return: returns a value.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *b = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		if (!(*--accept))
			break;
		accept = b;
	}
	return (a);
}
