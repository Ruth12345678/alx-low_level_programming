#include "main.h"
#include<string.h>

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

	for (a = 0; dest[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	do {
		dest[a] = dest[a];
		a++;
	} while (dest[a]);

	return (dest);
}
