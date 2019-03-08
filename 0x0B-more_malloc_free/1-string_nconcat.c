#include "holberton.h"
/**
 * string_nconcat - function that concatenates two string
 * @s1: character pointer 1.
 * @s2: character pointer 2.
 * @n: unsigned integer to be compared
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	char *empty = "";
	unsigned int strlen1 = 0, x = 0, y = 0;

	if (s1 == NULL)
	s1 = empty;
	if (s2 == NULL)
	s2 = empty;

	strlen1 = (unsigned int)_strlen(s1);
	ptr = malloc((strlen1 + n + 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
		for (; x < (strlen1 + n); x++)
	{
		if (x < strlen1)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[y++];
	}
	ptr[x] = '\0';
	return (ptr);
}
/**
 * _strlen - returns lenght of a string
 * @s: character(s)
 * Return: integer.
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		x++;
	}
	return (x);
}

