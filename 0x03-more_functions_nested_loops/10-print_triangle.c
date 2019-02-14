#include "holberton.h"
/**
 * print_triangle - function that prints a triangle
 *@size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int rows, columns, space;

		if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 0; rows < size; rows++)
		{
			for (columns = 0; columns < size; columns++)
			{
				space = size - rows - 1;
				if (columns < space)
				{
				_putchar(' ');
				}
				else
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
