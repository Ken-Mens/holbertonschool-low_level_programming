#include "holberton.h"
/**
  * _isalpha - checks for alphabetic character
  * @c: integer to be printed
  * Return: 1 if is c is lowercase or 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	return (0);
}
