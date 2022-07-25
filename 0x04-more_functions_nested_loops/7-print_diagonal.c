#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_diagonal - prints diagonal lines
 *
 * @n: integer representing n times
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 2; b <= a && b > 1; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
