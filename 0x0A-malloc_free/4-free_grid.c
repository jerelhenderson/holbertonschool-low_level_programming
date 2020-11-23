#include "holberton.h"


/**
 * free_grid - free a 2D grid previously created by `alloc_grid` function
 *
 * @grid: grid passed to function
 * @height: given height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height < 1)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
