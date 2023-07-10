#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free 2D grid.
 * @grid: The grid.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);  /* Free memory for each row */
	free(grid);  /* Free memory for row pointers */
}

