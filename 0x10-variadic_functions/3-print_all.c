#include "variadic_functions.h"
#include<stdio.h>
#include<string.h>
#include<stdarg.h>

/**
 * print_all - variadic function for all types of formats
 *
 * @format: format of input
 */

void print_all(const char * const format, ...)
{
	int ex;
	char *str;
	va_list form;
	int a = 0;

	va_start(form, format);
	while (format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(form, int));
				ex = 0;
				break;
			case 'i':
				printf("%i", va_arg(form, int));
				ex = 0;
				break;
			case 'f':
				printf("%f", va_arg(form, double));
				ex = 0;
				break;
			case 's':
				str = va_arg(form, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				ex = 0;
				break;
			default:
				ex = 1;
				break;
		}
		if (format[a + 1] != '\0' && ex == 0)
			printf(", ");
		a++;
	}
	putchar('\n');
	va_end(form);
}
