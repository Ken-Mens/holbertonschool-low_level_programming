/**
 * clear_bit - function that sets value of a bit to 0 at given index.
 * @index: index starting from 0.
 * @n: n is the data of integers.
 * Return: integer 1 if working or -1 if error.
 */
#include "holberton.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
