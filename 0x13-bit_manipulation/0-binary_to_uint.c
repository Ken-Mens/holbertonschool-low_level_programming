#include "holberton.h"
/**
 * binary_to_uint - function that converts binary number
 * to unsigned int.
 * @b: array of characters
 * Return: Converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int hex = 0, x = 0;

	if (!b)
	return (0);
	while (b[x])
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		if (b[x] == '1')
		{
			hex = hex << 1;
			hex += 1;
		}
		else if (b[x] == '0')
		hex  <<= 1;
		x++;
	}
	return (hex);
}
