#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14 followed by a new line
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n, count;
		for (n = 0; n < 10; n++)
		{
			for (count = 0; count < 15; count++)
			{
			if (count > 9)
			_putchar ((count / 10) + '0');
			_putchar ((count % 10) + '0');
			}
		_putchar('\n');
	}
}
