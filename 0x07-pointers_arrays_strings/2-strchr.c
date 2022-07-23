#include "main.h"
#include<string.h>
#include<stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: input string
 *
 * @c: character to be located
 *
 * Return: returns a value
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}

