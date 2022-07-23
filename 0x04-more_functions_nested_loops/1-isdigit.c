#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _isdigit - integer check
 *
 * @c: input
 *
 * Return: return
 */

int _isdigit(int c)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == c)
		{
			return (1);
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (0);
		}
	}
	return (1);
}
