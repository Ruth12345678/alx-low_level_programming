#include<stdio.h>
#include<string.h>
/**
 * main - entry point
 *
 * Return: returns zero
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
