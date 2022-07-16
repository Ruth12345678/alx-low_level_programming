#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * _strncat - concatenation
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: total
 *
 * Return: returns a value
 */

char *_strncat(char *dest, char *src, int n)
{
	int dsz, i;

	for (dsz = 0; dest[dsz] != '\0'; dsz++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dsz + i] = src[i];
	}
	dest[dsz + i] = '\0';
	return (dest);
}
