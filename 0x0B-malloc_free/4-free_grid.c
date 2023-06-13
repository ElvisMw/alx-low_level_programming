#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid
 * @grid: the grid to free
 * @height: grid's heaight
 *
 * Return: No return value
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{

		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}

	free(grid);
}

