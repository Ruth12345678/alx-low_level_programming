#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * more_numbers - prints zero to fourteen ten times
 */

void more_numbers(void)
{
	int count, num;

	for (count = 0; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			printf("%i", num);
		}
		putchar('\n');
	}
}
