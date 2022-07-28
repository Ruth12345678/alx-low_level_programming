#include "main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * str_concat - concatenates strings
 *
 * @s: first string
 *
 * @s2: second string
 *
 * Return: returns a value.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1, len2, len;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	len1 = strlen(s1);
	len2 = strlen(s2);

	s3 = malloc((len1 + len2) * sizeof(char) + 1);
	if (s3 == NULL)
		return (NULL);
	for (len = 0; len <= len1 + len2; len++)
	{
		if (len < len1)
			s3[len] = s1[len];
		else
			s3[len] = s2[len - len1];
	}
	s3[len] = '\0';
	return (s3);
}
