#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_diagsums - print sum of diagonals in matrices
 *
 * @a: matrix;
 *
 * @size: matrix size;
 */

void print_diagsums(int *a, int size)
{
	int ss = size * size;
	int dgs, lds, rds = 0;

	for (dgs = 0; dgs < ss;)
	{
		lds += a[dgs];
		dgs += (size + 1);
	}
	for (dgs = 0; dgs < (ss - size);)
	{
		dgs += (size - 1);
		rds += a[dgs];
	}
	printf("%d, %d\n", lds, rds);
	lds = 0;
	rds = 0;
}
