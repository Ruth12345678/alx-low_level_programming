#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_numbers - prints numbers from zero to nine
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
