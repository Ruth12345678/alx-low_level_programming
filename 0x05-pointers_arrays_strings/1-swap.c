#include "main.h"
#include<stdio.h>

/**
 * swap_int - swaps numbers
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: returns a value
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
