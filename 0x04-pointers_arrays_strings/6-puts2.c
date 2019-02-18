#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x = 0;
	char letter;

	for (; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
		letter = str[x];
		_putchar(letter);
		}
	}
	_putchar('\n');
}
