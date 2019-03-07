#include "holberton.h"
/**
 * array_range - function that creates an array of integers
 * @min: mininum parameter.
 * @max: maximum parameter.
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array, x;

	if (min > max)
		return (NULL);
	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
	return (NULL);
		for (x = 0; min <= max; array[x++] = min++)
			array[x] = min;
			return (array);
}
