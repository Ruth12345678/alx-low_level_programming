#include<stdio.h>
#include<string.h>

/**
 * main - entry point
 *
 * Return: exit point, zero is success
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		
		if (a != 9)
		{
			putchar(',');
		}
		else
		{

		}
	}
	putchar('\n');
}
