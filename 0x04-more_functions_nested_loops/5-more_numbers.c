#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * more_numbers - prints zero to fourteen ten times
 */

void more_numbers(void)
{
	int count = 0;
	char num, num2;

	while (count < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			num2 = num;
			if (num > 9)
			{
				_putchar('1');
				num2 = num % 10;
			}
			_putchar('0' + num2);
		}
		_putchar('\n');
		count++;
	}
}
