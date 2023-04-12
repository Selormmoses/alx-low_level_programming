#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - a program that returns two dimensional array of ints
 * @width: width of input
 * @height: height of input
 * Return: pointer to two dim array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

			array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (; x >= 0; x--)
				free(array[x]);

			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}
	return (array);
}
