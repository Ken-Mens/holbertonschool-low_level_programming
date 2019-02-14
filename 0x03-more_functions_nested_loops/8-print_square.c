#include "holberton.h"
/**
 * print_square - prints a square, followed by a new line
 *@size: size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int count1, count2;

	if (size <= 0)
	_putchar('\n');
	for (count1 = 0; count1 < size; count1++)
	{
	for (count2 = 0; count2 < size; count2++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
