#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 2 dimensional grid function
 * @grid: the grid
 * @height: the height
 * Return: just return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
