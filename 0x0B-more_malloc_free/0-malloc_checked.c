/**
 * malloc_checked - allocates memory using malloc
 * @b: integer to be used.
 * Return: Always 0.
 */
#include "holberton.h"

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
		return (ptr);
}
