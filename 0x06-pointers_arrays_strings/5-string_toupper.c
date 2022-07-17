#include "main.h"
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

/**
 * string_toupper - converts characters in
 * a string to uppercase.
 *
 * @stra: input string
 *
 * Return: returns a value.
 */

char *string_toupper(char *stra)
{
	int a;

	for (a = 0; stra[a] != '\0'; a++)
	{
		stra[a] = toupper(stra[a]);
	}
	return (stra);
}
