#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: pointer to a string character pointer
 * @f: void pointer.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);
}
