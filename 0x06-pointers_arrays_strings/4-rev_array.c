#include "main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * reverse_array - reverses an array
 *
 * @a: array in question
 *
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n/2; b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}
}
