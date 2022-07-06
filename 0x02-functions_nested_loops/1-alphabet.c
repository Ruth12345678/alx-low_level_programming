#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: exit point
 */

void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
}
