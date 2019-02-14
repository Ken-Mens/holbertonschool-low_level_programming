#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: integer parameter.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int rows, columns;

	for (rows = 0; rows < n; rows++)
	{
		for (columns = 0; columns <= rows; columns++)
		{
		if (rows != columns)
		{
		_putchar(' ');
		}
		else
		{
		_putchar('\\');
		}
	}
	_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}
