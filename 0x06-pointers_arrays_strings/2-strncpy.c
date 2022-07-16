#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * _strncpy - copies a string wrt n
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: n
 *
 * Return: returns a avalue
 */

char *_strncpy(char *dest, char *src, int n)
{

	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	do {
		dest[a] = dest[a];
		a++;
	} while (dest[a] != '\0');
	dest[a] = '\0';
	return (dest);
}
