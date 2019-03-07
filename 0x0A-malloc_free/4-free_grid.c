#include "holberton.h"
/**
 * free_grid - frees up a 2d grid previously created
 * @grid: double pointer.
 * @height: height of said grid.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0;  x <= height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
