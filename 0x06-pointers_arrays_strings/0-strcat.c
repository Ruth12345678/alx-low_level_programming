#include "main.h"
#include<string.h>
/**
 * _strcat - concatenation
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: returns a value
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');
	return (dest);
}
