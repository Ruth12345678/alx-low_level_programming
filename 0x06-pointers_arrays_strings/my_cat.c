#include "main.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

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
	size_t len1, len2;
	char *new_s = malloc((len1 = strlen(dest)) + (len2 = strlen(src)) + 1);
	
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
		new_s[i] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		new_s[j] = src[i];
		i++;
		j++;
	}
	new_s[j] = '\0';
	i = 0;

	while (new_s[i])
	{
		dest[i] = new_s[i];
		i++;
	}

	return (dest[i]);
}
