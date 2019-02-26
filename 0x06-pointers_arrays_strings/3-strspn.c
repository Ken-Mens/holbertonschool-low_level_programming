#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: prefix string
 * @accept: returns number of bytes
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b, a = 0;

	while (s[a])
	{
		b = 0;
		while (accept[b] && s[a] != accept[b])
		b++;
	if (accept[b] == 0)
	return (a);
	a++;
	}
	return (a);
}
