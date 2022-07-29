#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

/**
 * malloc_checked - allocates a memory using malloc
 *
 * @b: input value
 *
 * Return: returns the pointer;
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == 0)
		exit(98);
	return (a);
}
