#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * _strcat - concantenates strings
 *
 * @dest: destrination
 *
 * @src: source
 *
 * Return: returns a string
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++);
	       
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');
	
	return (dest);
}
