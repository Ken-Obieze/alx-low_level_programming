#include "main.h"

/**
 * free_grid - frees previously created 2D grid
 * @grid: grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int 1;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
