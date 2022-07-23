#include "main.h"
#include<stdio.h>

/**
 * _puts - provides a similar function
 *
 * @str: input string
 *
 * Return: returns a value
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
