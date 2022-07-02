#include<stdio.h>
/**
 * main - entry point
 *
 * Return: returns zero
 */

int main(void)
{
	for (lets = 'a'; lets <='z'; lets++)
	{
		putschar(lets);
	}
	for (lets = 'A'; lets <= 'Z'; lets++)
	{
		putschar(lets);
		putschar("\n");
	}
	return (0);
}
