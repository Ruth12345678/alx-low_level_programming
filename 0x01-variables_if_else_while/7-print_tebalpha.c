#include<stdio.h>
#include<string.h>

/**
 * main - entry point
 *
 * Return: returns zero as success
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
