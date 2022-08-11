#include "variadic_functions.h"
#include<stddef.h>
#include<stdio.h>
#include<string.h>
#include<stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: separates stuff
 *
 * @n: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list c;
		unsigned int a;

		va_start(c, n);
		if (n == 0)
		{
		}

		else
		{
			for (a = 0; a < n; a++)
			{
				if (a < n - 1)
				{
					printf("%d%s", va_arg(c, unsigned int), separator);
				}
				else
				{
					printf("%d", va_arg(c, unsigned int));
				}	
			}
		}
		va_end(c);
		
		putchar('\n');
	}
}
