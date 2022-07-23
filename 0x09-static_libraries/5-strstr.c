#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strstr - finds a needle string in a
 * haystack string.
 *
 * @haystack: string to be searched
 *
 * @needle: string to be searched by
 *
 * Return: returns a value.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack, *b = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (a);
		}
		needle = b;
		a++;
		haystack = a;
	}
	return (0);
}
