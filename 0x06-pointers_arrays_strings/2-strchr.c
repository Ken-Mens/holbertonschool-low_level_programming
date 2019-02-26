#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: character to be found
 * @c: character variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{

		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
			return (s + 1);
			s++;
	}
	return (s + 1);
}
