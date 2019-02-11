#include "holberton.h"
/**
  * _islower - checks for lowercase character
  * @c: integer to be printed
  * Return: 1 if is c is lowercase or 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
