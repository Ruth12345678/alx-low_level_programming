#include<stdio.h>
#include "main.h"

/**
 * print_rev - reverses string
 *
 * @s: string
 *
 * Return: returns value
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	while (a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
