#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-D array of integers.
 * @grid: 2-D array of integers to be freed.
 * @height: height of grid.
 */

void free_grid(int **grid, int height)
{
	int index;

	/* Looping through the first dimension freeing every array*/
	for (index = 0; index < height; index++)

		free(grid[index]);

	free(grid);
}
