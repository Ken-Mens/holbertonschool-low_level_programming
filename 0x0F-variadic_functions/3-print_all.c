#include "variadic_functions.h"
/**
 * p_char - prints characters.
 * @valist: valist parameter.
 * Return: Always 0.
 */
void p_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * p_int - prints integers.
 * @valist: valist parameter.
 * Return: Always 0.
 */
void p_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * p_float - prints float number.
 * @valist: valist parameter.
 * Return: Always 0.
 */
void p_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
* p_string - prints string.
* @valist: valist parameter.
* Return: Always 0.
*/

void p_string(va_list valist)
{
	char *foo;

	foo = va_arg(valist, char *);
	if (foo == NULL)
	{
		foo = "(nil)";
	}
	printf("%s", foo);
}
/**
* print_all - function that prints anything
* @format: format list of types of arguments
* Return: Always 0.
*/
void print_all(const char * const format, ...)
{
	unsigned int x = 0, y = 0;
	char *ptr = "";
	va_list valist;

	check_t agtypes[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};

	va_start(valist, format);
	while (format && format[x])
	{
		while (agtypes[y].chk)
		{
			if (format[x] == *agtypes[y].chk)
			{
				printf("%s", ptr);
				agtypes[y].f(valist);
				ptr = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	printf("\n");
	va_end(valist);
}
