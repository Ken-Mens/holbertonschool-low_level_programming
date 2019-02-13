#include "holberton.h"

/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer from 00:00 to 23:59.
 * Return: 0.
 */
void jack_bauer(void)
{
	int minutes, seconds;

	for (minutes = 0; minutes < 24; minutes++)
	{
		for (seconds = 0; seconds < 60; seconds++)
		{
			_putchar((minutes / 10) + '0');
			_putchar((minutes %  10) + '0');
			_putchar(':');
			_putchar((seconds / 10) + '0');
			_putchar((seconds % 10) + '0');
			_putchar('\n');
		}
	}
}


