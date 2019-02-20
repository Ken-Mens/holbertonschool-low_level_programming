#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: new value.
 */
void swap_int(int *a, int *b)
{
	int swipping;

	swipping = *a;
	*a = *b;
	*b = swipping;
}
