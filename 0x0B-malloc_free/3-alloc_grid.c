#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -function that returns a pointer to a 2 dimensional array
 * @width: Width array
 * @height: height array
 * Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}

