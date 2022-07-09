#include "main.h"
#include<stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to ninety-eight, followed by a new line.
 *
 * @n: input number
 *
 * Return: returns a value
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		for (n = n; n <= 98; n++)
		{
			if (n < 98)
			{
				printf("%i, ", n);
			}
			else
			{
				printf("%i\n", n);
			}
		}
	}
	else if (n > 97)
	{
		for (n = n; n >= 98; n--)
		{
			if (n > 98)
			{
				printf("%i, ", n);
			}
			else
			{
				printf("%i\n", n);
			}
		}
	}
	else
	{
		printf("%i\n", n);
	}
}	
