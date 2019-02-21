#include "holberton.h"
/**
 * _strncpy - function that copies a string from
 * src to dest up to n chars
 * @dest: destination string
 * @src: source string
 * @n: number of bytes that will be copied over
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int  x = 0;

	for (; x < n && src[x]; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
