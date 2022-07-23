#include "main.h"
#include<string.h>

/**
 * _memset - fills a memory with a constant byte
 *
 * @s: memory
 *
 * @b: constant byte
 *
 * @n: number of times
 *
 * Return: returns a value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	unsigned int c;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	for (c = a; c < strlen(s); c++)
	{
		s[c] = s[c];
	}
	return (s);
}
