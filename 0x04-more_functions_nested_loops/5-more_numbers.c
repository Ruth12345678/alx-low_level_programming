#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * more_numbers - prints zero to fourteen ten times
 */

void more_numbers(void)
{
	int count;
	char count2;
	char num;

	for (count = 0; count <= 10; count++)
	{
		for (num = '0'; num <= '9'; num++)
		{
			_putchar(num);
		}
		for (count2 = '0'; count2 <= '4'; count2++)
		{
			printf("1%c", count2);
		}
		putchar('\n');
	}
}
