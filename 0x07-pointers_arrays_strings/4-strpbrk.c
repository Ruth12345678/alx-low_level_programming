#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strpbrk- returns a pointer to s starting from char accept.
 *
 * @s: string
 *
 * @accept: search parameters
 *
 * Return: returns a value
 */

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
