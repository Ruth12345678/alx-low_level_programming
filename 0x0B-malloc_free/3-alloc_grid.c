#include "main.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * alloc_grid - returns a pointer
 *
 * @width: grid width
 *
 * @height: grid height
 *
 * Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
	int **inc, a, b;

	inc = malloc(sizeof(*inc) * height);

	if (width <= 0 || height <= 0 ||inc == 0)
		return (NULL);
	else
	{
		for (a = 0; a < height; a++)
		{
			inc[a] = malloc(sizeof(**inc) * width);
			if (inc[a] == 0)
			{
				while (a--)
					free(inc[a]);
				free(inc);
				return (NULL);
			}
			for (b = 0; b < width; b++)
			{
				inc[a][b] = 0;
			}
		}	
	}
	return (inc);
}
