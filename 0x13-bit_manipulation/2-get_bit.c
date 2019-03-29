#include "holberton.h"
/**
 * get_bit - function that returns value of a bit a given index
 * @n: value placed
 * @index: index
 * Return: Value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
		i = (n >> index) & 1;
		return (i);
}
