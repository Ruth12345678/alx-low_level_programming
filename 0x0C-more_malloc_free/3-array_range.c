#include "main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min
 *
 * @max: max
 *
 * Return: returns a value
 */

int *array_range(int min, int max)
{
	int *a, b;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == 0)
		return (NULL);
	for (b = 0; min + b <= max; b++)
		a[b] = a + i;
	return (a);
}
