#include "holberton.h"
/**
* _sqrt_recursion - returns natural square root
* @n: integer to be iterated through
* Return: int, square root
*/
int _sqrt_recursion(int n)
{
	return (_helper_recursion(1, n));
}
/**
* _helper_recursion - find square
* @n: integer parameter for root
* @limit: integer parameter for condition
* Return: square root integer or -1
*/
int _helper_recursion(int n, int limit)
{
	if (n * n == limit)
		return (n);
	if (n < 0)
		return (-1);
	if (n * n > limit)
		return (-1);
	return (_helper_recursion(n + 1, limit));
}
