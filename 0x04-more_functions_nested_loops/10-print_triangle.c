#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_triangle - prints a triangle
 */

void print_triangle(int size)
{
	int base, height, len;
	
	if (size > 0)
	{
		for (base = 1; base <= size; base++)
		{
			for (height = 1; height <= size - base; height++)
			{
				_putchar(' ');
			}
			for (len = 1; len <= base; len++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}		
