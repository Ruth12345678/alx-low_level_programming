#include<stdio.h>
#include<string.h>

/**
 * main - entry point
 *
 * Return: exit point
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (b > a)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a != 8)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{

				}
			}
			else
			{

			}
		}
	}
	putchar('\n');
	return (0);
}
