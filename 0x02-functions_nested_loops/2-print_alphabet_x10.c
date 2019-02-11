#include "holberton.h"

/**
  * print_alphabet_x10 - C program that prints 10 times
  * the alphabet in lowercase, followed by a new line
  * Return: 0 (success)
  */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
		_putchar(y);
		}
		_putchar('\n');
	}
}
