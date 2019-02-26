#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: character to be returned
 * @src: source to be swapped
 * @n: integer variable
 * Return: Dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
