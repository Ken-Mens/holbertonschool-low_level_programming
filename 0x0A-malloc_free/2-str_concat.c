#include "holberton.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *point;
	unsigned int len1 = 0, len2 = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len2++;
	point = malloc((len1 + len2) * sizeof(*point) + 1);
	if (point == NULL)
		return (NULL);
	for (; x < len1; x++)
		point[x] = s1[x];
	for (; y < len2; x++, y++)
		point[x] = s2[y];
	return (point);
}
