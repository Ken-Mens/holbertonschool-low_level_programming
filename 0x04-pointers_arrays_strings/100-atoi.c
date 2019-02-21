#include "holberton.h"
/**
 * _atoi - function that will convert a string of characters
 * and digits to an integer
 * @s: character to be converted
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int number, i, negative;

	negative = 1;
	i = number;
	number = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			negative = negative * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (number >= 0)
		{
			number = number * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			number = number * 10 - (s[i] - '0');
			i++;
		}
	}
	negative = negative * -1;
	return (number * negative);
}

