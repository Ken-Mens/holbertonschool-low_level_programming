#include "holberton.h"
/**
 * print_binary - function that prints binary number
 * @n: number to be converted.
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;

	if (temp > 1)
		print_binary(temp >> 1);
	if ((temp & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}
