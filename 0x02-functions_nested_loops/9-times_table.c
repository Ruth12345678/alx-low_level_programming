#include "main.h"
#include<stdio.h>

/**
 * times_table - times table with comma
 *
 * Return: zero
 */

void times_table(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%i,", a * b);
		}
		_putchar(' ');
		_putchar(' ');
		_putchar('\n');
		a++;
	}
}
