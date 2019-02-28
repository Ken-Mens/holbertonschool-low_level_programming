#include "holberton.h"
/**
* _sqrt_recursion - Entry point
* @n: int parameter
* Return: int, square root
*/
int _sqrt_recursion(int n)
{
	return (_helper_prime(1, n));
}
/**
* _helper_prime - find square
* @n: integer parameter for root
* @limit: integer parameter for condition
* Return: square root integer or -1
*/
int _helper_prime(int n, int limit)
{
	if (n * n == limit)
		return (n);
	if (n < 0)
		return (-1);
	if (n * n > limit)
		return (-1);
	return (_helper_prime(n + 1, limit));
}
