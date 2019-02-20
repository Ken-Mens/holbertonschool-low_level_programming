#include "holberton.h"
/**
 * _strcpy - copies string pointed to by source to
 * the buffer
 * @dest: destination
 * @src: string to copy
 * Return: pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int copycat;

	for (copycat = 0; src[copycat] != '\0'; copycat++)
	{
		dest[copycat] = src[copycat];
	}
	return (dest);
}
