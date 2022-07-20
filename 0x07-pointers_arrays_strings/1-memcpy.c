#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _memcpy - copies a memory area
 *
 * @dest: destination area
 *
 * @src: source area
 *
 * @n: number of bytes
 *
 * Return: returns a value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b, c;

	for (b = 0; dest[b]; b++)
	{
		dest[b] = dest[b];
	}
	for (c = 0; c < n; c++)
	{
		dest[b] = src[c];
		b++;
	}
	for (b = b; dest[b]; b++)
	{
		dest[b] = dest[b];
	}
	return (dest);
}
