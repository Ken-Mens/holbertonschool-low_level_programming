#include "holberton.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: character double pointer
 * @to: character pointer to
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}