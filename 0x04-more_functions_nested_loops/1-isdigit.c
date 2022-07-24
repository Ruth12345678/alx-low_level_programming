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
	int b = 0;

	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
	{
		b = 1;
	}
	else
	{
		b = 0;
	}

	return (b);
}
