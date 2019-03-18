#include "variadic_functions.h"
/**
* print_numbers - prints numbers.
* @separator: constant character pointer.
* @n: constant unsigned int to iterate through.
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int total;
	va_list valist;

	va_start(valist, n);
		for (; i < n; i++)
	{
			total = va_arg(valist, int);
			printf("%d", total);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(valist);
}
