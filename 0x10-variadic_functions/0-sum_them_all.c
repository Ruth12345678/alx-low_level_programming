#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>

/**
 * sum_them_all - sums all parameters
 *
 * @n: number
 *
 * Return: returns a value
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list fir;
	unsigned int a, sum;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(fir, n);
		sum = 0;
		for (a = 0; a < n; a++)
			sum += va_arg(fir, int);
		va_end(fir);
		return (sum);
	}
}
