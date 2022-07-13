#include "main.h"
#include<stdio.h>

/**
 * puts2 - prints selected characters
 *
 * @str: input string
 *
 * Return: return value
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			putchar(str[a]);
		}
		a++;
	}
	putchar('\n');
}
