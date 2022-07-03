#include<stdio.h>
#include<string.h>

/**
 * main - entry point
 *
 * Return: exit point, zero means success
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			if (b > a)
			{
				for (c = 2; c <= 9; c++)
				{
					if (c > b)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(c + '0');
						if ( a != 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
