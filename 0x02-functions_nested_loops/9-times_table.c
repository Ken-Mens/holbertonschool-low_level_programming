#include "holberton.h"

/**
 * times_table -  prints the 9 times table
 * Return: 0 on success.
 */
void times_table(void)
{
	int rows, columns;
	int ones, tens;
	int multiple;

	for (rows = 0; rows <= 9; rows++)
	{
	for (columns = 0; columns <= 9; columns++)
		{
		multiple = rows * columns;
		if (multiple >= 10)
		{
		ones = multiple % 10;
		tens = multiple / 10;
		_putchar(' ');
		_putchar(tens + '0');
		_putchar(ones + '0');
		}
		else
		{
		if (columns != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(multiple + '0');
		}
		if (columns != 9)
		{
		_putchar(',');
		}
		if (columns == 9)
		{
			_putchar('\n');
		}
		}
	}

}
