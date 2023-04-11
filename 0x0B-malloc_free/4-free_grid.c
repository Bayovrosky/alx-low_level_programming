#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2d array
 * @grid: not 3d grid
 * @height: height dimension of grids.
 * Description: frees memory of grids
 * Return: nothing
 *
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
