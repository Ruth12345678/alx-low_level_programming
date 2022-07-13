#include "main.h"
#include<stdio.h>

/**
 * print_times_table - prints the n times table
 *
 * @n: input character
 *
 * Return: returns a value
 */

void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b < n)
				{
					printf("%i,   ", a * b);
				}
				else
				{
					printf("%i\n", a * b);
				}
			}
			_putchar('\n');
		}
	}
}

