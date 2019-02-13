#include "holberton.h"

/**
* print_last_digit - function that prints the last digit of a number.
* @r: integer parameter
* Return: i in this case.
*/
int print_last_digit(int r)
{
	int digit = r % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
