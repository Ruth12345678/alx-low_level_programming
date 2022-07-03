#include<stdio.h>
#include<string.h>

/**
 * main - entry point
 *
 * Return: return zero as success
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
