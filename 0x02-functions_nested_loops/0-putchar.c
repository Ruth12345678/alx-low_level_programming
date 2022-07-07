#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: exit point
 */

int main(void)
{
	int i;
	char e[8] = "_putchar";

	for (i = 0; i <= 7; i++)
		_putchar(e[i]);
	_putchar('\n');
	return (0);
}
