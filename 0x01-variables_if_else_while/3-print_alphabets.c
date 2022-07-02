#include<stdio.h>
/**
 * main - entry point
 *
 * Return: returns zero
 */

int main(void)
{
	char lets;

	for (lets = 'a'; lets <='z'; lets++)
	{
		putchar(lets);
	}
	for (lets = 'A'; lets <= 'Z'; lets++)
	{
		putchar(lets);
		putchar("\n");
	}
	return (0);
}
