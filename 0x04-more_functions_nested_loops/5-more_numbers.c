#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * more_numbers - prints zero to fourteen ten times
 */

void more_numbers(void)
{
	int count;
	char num;

	for (count = 0; count <= 10; count++)
	{
		for (num = '0'; num <= '9'; num++)
		{
			if (num < '9')
			{
				_putchar(num);
			}
			else
			{
				int ad;
				for (ad = 9; ad <= 14; ad++)
				{
					if (ad < 14)
					{
						printf("%d", ad);
					}
					else
					{
						printf("%d\n", ad);
					}
				}
			}
		}
	}
}
