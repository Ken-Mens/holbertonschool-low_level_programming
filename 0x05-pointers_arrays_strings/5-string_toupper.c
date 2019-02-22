#include "holberton.h"
/**
 * string_toupper - converts all lowercase letters of a string
 * to uppercase
 * @s: pointer to string converted
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
