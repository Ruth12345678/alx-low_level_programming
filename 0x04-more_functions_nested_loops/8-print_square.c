#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_square - prints a square and then a new line
 *
 * @size: square length
 */

void print_square(int size)
{
	int len, len2;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (len2 = 0; len2 < size; len2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
