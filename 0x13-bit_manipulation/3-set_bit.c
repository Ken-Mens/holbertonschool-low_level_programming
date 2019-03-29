#include "holberton.h"
/**
 * set_bit- sets value of a bit to 1 at given index.
 * @index: index is index starting from 0
 * @n: numbers given.
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flag;

	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	flag = 1 << index;
	*n = *n | flag;
	return (1);
}
