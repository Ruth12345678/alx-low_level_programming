#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * print_chessboard - prints a chessboard
 *
 * @a: number of rows
 */

void print_chessboard(char (*a)[8])
{
	int b;

	for (b = 0; b < 64; b++)
	{
		putchar((*a)[b]);
		if ((b + 1) % 8 == 0)
			putchar('\n');
	}
}
