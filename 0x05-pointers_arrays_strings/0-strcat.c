#include "holberton.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to character array
 * @src: pointer to character array
 * Return: pointer to char array dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *concat;

	concat = dest;
	while (*concat != '\0')
	{
		concat++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		*concat = src[i];
		concat++;
	}
	*concat = '\0';
	return (dest);
}
