#include "holberton.h"
/**
 * _strdup - returns a pointer to newly allocated space in memory
 * which contains copy of the string given as parameter
 * @str: character pointer to string
 * Return: Duplicated string.
 */
char *_strdup(char *str)
{
	char *point;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;
	i++;
	point = malloc(sizeof(char) * i);
	i = 0;
		while (str[i] != 0)
		{
			point[i] = str[i];
			i++;
		}
	return (point);
	free(str);
}
