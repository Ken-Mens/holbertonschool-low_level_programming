#include "holberton.h"
#include "holberton.h"
/**
* is_prime_number - checks if number is prime
* @n: int parameter
* Return: 1 if input is prime or 0 otherwise
*/
int is_prime_number(int n)
{
	return (_helper_prime(n, 2));
}
/**
* _helper_prime - find square
* @i: integer parameter for root
* @range: integer parameter for condition
* Return: square root integer or -1
*/
int _helper_prime(int i, int range)
{
	if (i == range)
		return (1);
	if (i % range == 0)
		return (0);
	if (i < 0 || i == 1)
		return (0);
	return (_helper_prime(i, range += 1));
}
