#include "holberton.h"
/**
 * alloc_grid - function that returns a pointer to 2d array of integers
 * @width: width of 2d array.
 * @height: height of 2d array.
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int i, l;
	int **grid;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
	{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (l = 0; l < width; l++)
		grid[i][l] = 0;
	}
	return (grid);
}
