#include "holberton.h"
/**
 * rot13 - encodes string while using rot13
 *@s: character pointer
 * Return: character s.
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
		 (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'N' && s[i] <= 'Z') ||
		(s[i] >= 'n' && s[i] <= 'z'))
				s[i] = s[i] - 13;
			else
				s[i] = s[i] + 13;
			i++;
		}
	i++;
	}
	return (s);
}
