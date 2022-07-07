#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @d: input character
 *
 * Return: returns a value
 */

int print_last_digit(int d)
{
	int a;

	if (d < 0)
		a = -1 * (d % 10);
	else
		a = d % 10;
	_putchar((a % 10) + '0');
	return (a % 10);
}
