#include "main.h"
#include<string.h>
#include<stdio.h>

/**
 * rev_string: reverse string
 *
 * @s: input string
 *
 * Return: rturns value
 */

void rev_string(char *s)
{
	int a, b, c;
	char t;

	for (a = 0; s[a] != '\0'; a++)
	;

	b = 0;

	c = a / 2;

	while (c--)
	{
		t = s[a - b - 1];
		s[a - b - 1] = s[b];
		s[b] = t;
		b++;
	}
}
