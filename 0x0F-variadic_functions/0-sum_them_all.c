#include "variadic_functions.h"
/**
* sum_them_all - function that returns the sum of its parameters.
* @n: integer parameter
* Return: if n == 0 return (0).
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int total = 0, x;
	va_list valist;

	va_start(valist, n);
		if (n == 0)
		return (0);
		x = 1;
		while (x <= n)
		{
			x++;
			total += va_arg(valist, int);
		}
		va_end(valist);
		return (total);
}
