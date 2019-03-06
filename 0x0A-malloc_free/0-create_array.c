/**
 * create_array - creates array of chars.
 * @size: size parameter
 * @c: character parameter
 * Return: 0.
 */
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int y;

	if (size == 0)
	return (NULL);
	i = malloc(size * sizeof(*i));
	if (i == NULL)
	return (NULL);
	for (y = 0; y < size; y++)
	{
		y[i] = c;
	}
		return (i);
}
