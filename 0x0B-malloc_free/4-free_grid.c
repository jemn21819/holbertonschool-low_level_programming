#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free the 2 dimensional arrays
 * @grid: double pointer
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
