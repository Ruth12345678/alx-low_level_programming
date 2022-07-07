#include "main.h"

/**
 * print_sign - prints sign of number
 *
 * @n: input number
 *
 * Return: returns value
 */

int print_sign(int n)
{
	int val = 0;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n = 0)
	{
		val = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		val = -1;
		_putchar('-');
	}
	else
	{
		val = -2;
	}
	return (val);
}
