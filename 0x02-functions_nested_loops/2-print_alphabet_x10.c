#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lower case ten times
 */

void print_alphabet_x10(void)
{
	int c;
	char d;

	for (c = 0; c <= 9; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
