#include "holberton.h"
/**
 * puts_half - prints half a string followed by
 * a new line
 * @str: string to print out half of string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int x;

	while (str[x] != '\0')
		x++;
	if (x % 2 == 0)
		x = x / 2;
	else
		x = (x + 1) / 2;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
