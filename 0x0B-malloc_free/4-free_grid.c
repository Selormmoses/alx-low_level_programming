#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees two dimentional array
 * @grid: grid to free
 * @height: height of grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
