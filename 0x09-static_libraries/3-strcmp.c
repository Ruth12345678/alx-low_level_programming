#include<stdio.h>
#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: returns a value
 */

int _strcmp(char *s1, char *s2)
{
	int neg, a;

	if (s1 != s2)
	{
		for (a = 0; s1[a] || s2[a]; a++)
		{
			if (s1[a] != s2[a])
			{
				neg = s1[a] - s2[a];
				break;
			}
			else if (s1[a] == s2[a])
			{
				continue;
			}
		}
	}
	else
	{
		neg = 0;
	}
	return (neg);
}
