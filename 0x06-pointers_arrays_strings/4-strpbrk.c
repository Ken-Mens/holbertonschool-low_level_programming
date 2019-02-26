#include "holberton.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: character pointer
 * @accept: character pointer string
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	i++;
	}

	return (0);
}
