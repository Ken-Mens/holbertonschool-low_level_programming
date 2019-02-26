#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: character pointer to string
 * @needle: character substring
 * Return: array of characters.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, comp;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		comp = i;
		while (haystack[i] == needle[j] &&
		       needle[j] && haystack[i])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + comp);
			i = comp + 1;
	}
	return (NULL);
}
