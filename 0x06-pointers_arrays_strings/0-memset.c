#include "holberton.h"
/**
 * _memset - function that fills memory with constant byte
 *@s: character to be returned
 *@b: character to be swapped
 *@n: integer variable
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	s[i] = b;
	return (s);
}
