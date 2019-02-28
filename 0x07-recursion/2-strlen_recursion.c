#include "holberton.h"
/**
 * _strlen_recursion - check for length of a string using recursion.
 * @s: character pointer to a string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
