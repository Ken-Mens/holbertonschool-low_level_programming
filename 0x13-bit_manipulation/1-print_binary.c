#include "holberton.h"
/**
 * print_binary - function that prints binary number
 * @n: number to be converted.
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int bin = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');

	for (; bin >= 0; bin--)
	{
		if (n >> bin & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i != '\0')
			_putchar('0');
	}
}
