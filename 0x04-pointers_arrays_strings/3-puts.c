#include "holberton.h"
/**
 * _puts - prints a string
 *@str: string that'll be printed
 * Return: nothing.
 */
void _puts(char *str)
{
	int ssr;
	char letter;

	for (ssr = 0; str[ssr] != 0; ssr++)
	{
		letter = str[ssr];
		_putchar(letter);
	}
	_putchar('\n');
}
