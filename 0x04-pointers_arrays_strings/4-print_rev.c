#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * followed by a new line
 *@s: character variable.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int rw;
	char letter;

	for (rw = 0; s[rw] != 0; rw++)
	{
	}
	for (rw = rw - 1; rw >= 0; rw--)
	{
		letter = s[rw];
		_putchar(letter);
	}
	_putchar('\n');
}
