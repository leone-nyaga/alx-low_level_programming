#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2dimensional grid.
 * @grid: 2d grid
 * @height: height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)

	{
		free(grid[a]);
	}

	free(grid);
}
