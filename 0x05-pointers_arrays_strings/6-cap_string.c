#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to be interpreted
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
			i++;
			while  (s[i])

			if ((s[i]) == '\t' ||
			(s[i]) == '\n' ||
			(s[i]) == ',' ||
			(s[i]) == ';' ||
			(s[i]) == '.' ||
			(s[i]) == '!' ||
			(s[i]) == '?' ||
			(s[i]) == '"' ||
			(s[i]) == ' ' ||
			(s[i]) == '(' ||
			(s[i]) == ')' ||
			(s[i]) == '{' ||
			(s[i]) == '}')
			{
			i++;
			}
	else
		return (s);
	}
		return (0);
}
