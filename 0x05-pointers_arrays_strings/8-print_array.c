#include "main.h"
#include<stdio.h>

/**
 * print_array - print certan array integers
 *
 * @a: int type array pointer
 *
 * @n: int type integer
 *
 */

void print_array(int *a, int n)
{
	int b;

	b = 0;
	for (b--; b >= 0; b--, b++)
	{
		printf("%d", a[b]);
		if ( n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

