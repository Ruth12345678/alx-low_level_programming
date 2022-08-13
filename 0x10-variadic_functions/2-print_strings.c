#include "variadic_functions.h"
#include<stdio.h>
#include<string.h>
#include<stdarg.h>

/**
 * print_strings - variadic function to print strings
 *
 * @separator: separator for strings
 *
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int num;
	char *tr;

	va_start(str, n);

	for (num = 0; num < n; num++)
	{
		tr = va_arg(str, char *);
		if (tr == NULL)
			tr = "(nil)";
		if (separator != NULL && num < n - 1)
		{
			printf("%s%s", tr, separator);
		}
		else
		{
			printf("%s", tr);
		}
	}
	putchar('\n');
	va_end(str);
}
