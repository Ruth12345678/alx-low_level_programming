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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < strlen(s2))
		news = malloc(strlen(s1) + n * sizeof(char) + 1);
	else
		news = malloc(strlen(s1) + strlen(s2) + 1);
	if (news == 0)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		news[a] = s1[a];
	for (b = 0; s2[b] != '\0' && b < n; a++, b++)
		news[a] = s2[b];
	news[a] = '\0';
	return (news);
}
