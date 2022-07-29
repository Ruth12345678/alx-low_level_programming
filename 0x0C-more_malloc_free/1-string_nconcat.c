#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of bytes
 *
 * Return: returns a value.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *news;
	unsigned int a;
	unsigned int b;

	news = malloc(sizeof(s1) + n);
	if (news != NULL)
	{
		for (a = 0; a < strlen(s1); a++)
		{
			news[a] = s1[a];
		}
		if (n < strlen(s2))
		{
			for (b = 0; b < n; b++)
			{
				news[a] = s2[b];
				a++;
			}
		}
		else if (n >= strlen(s2))
		{
			for (b = 0; b < strlen(s2); b++)
			{
				news[a] = s2[b];
				a++;
			}
		}
		news[a] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (news);
}
