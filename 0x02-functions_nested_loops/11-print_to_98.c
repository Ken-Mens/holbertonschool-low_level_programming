#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: integer interpreted
 * Return: 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
