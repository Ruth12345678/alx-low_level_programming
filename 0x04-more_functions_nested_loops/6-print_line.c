#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_line - prints a line
 *
 * @n: line size
 */

void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
