#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strcpy - copies string to destination
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: returns value
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
