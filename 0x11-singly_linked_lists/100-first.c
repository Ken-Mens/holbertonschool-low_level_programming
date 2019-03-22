#include "lists.h"
/**
 * Printline - function that prints a line before main function
 *
 * Return: Void.
 */
void Printline(void) __attribute__((constructor));

void Printline(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my
	house upon my back!\n");
}
