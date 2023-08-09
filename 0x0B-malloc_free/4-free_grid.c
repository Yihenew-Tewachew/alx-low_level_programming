#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees 2d array
 * @grid: the grid
 * @height: size of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
