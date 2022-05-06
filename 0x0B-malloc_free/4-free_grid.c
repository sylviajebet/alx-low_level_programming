#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees the 2-D array created in alloc_grid
 *
 * @grid: Pointer for 2-D array
 * @height: Integer value for width
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
		free(grid[idx]);
	free(grid);
}
