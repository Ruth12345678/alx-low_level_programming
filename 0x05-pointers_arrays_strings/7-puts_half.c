#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * puts_half - prints half
 *
 * @str: input string
 *
 * Return: returns a value
 */

void puts_half(char *str)
{
	int a, b, c;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		for (b = a / 2; str[b] != '\0'; b++)
		{
			putchar(str[b]);
		}
	}
	else if (a % 2)
	{
		for (c = (a - 1) / 2; c < (a - 1); c++)
		{
			putchar(str[c + 1]);
		}
	}
	putchar('\n');
}
