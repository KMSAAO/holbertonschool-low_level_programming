#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 * @grid: int
 * @height: int
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
