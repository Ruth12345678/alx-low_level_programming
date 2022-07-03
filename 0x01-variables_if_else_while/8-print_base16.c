#include<stdio.h>
#include<string.h>

/**
 * main - entry point
 *
 * Return: returns zero as success value
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9 ; a++)
	{
		putchar(a + '0');
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
