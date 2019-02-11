#include "holberton.h"

/**
  * print_alphabet - C program that prints alphabet
  * in lowercase followed by a new line
  * Return: 0 (success)
  */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');
}
