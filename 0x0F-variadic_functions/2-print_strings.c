#include "variadic_functions.h"

/**
 * print_strings - prints string followed by a new line
 * @separator: separator parameter.
 * @n: unsigned int n that acts a number of strings
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *og;
	va_list valist;

	va_start(valist, n);
	for (; i <= n; i++)
	{
		if (i == n)
		{
			printf("\n");
			continue;
		}
		og = (va_arg(valist, char *));
		if (og == NULL)
		{
			printf("(nil)");
		}
		else
		printf("%s", og);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);
}
