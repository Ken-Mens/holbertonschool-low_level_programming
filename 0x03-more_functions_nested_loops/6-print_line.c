#include "holberton.h"
/**
 * print_line - draws a straight line in terminal
 *@n: integer parameter.
 * Return: Always 0.
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
