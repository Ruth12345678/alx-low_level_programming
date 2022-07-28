#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * free_grid - frees a grid
 *
 * @grid: address of grid
 *
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
