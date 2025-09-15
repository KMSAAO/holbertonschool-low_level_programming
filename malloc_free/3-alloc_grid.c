#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: int
 * @height: int
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int *));
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
			return (NULL);
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
