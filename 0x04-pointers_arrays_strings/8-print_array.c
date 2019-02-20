#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 *@a: array of int
 *@n: how much to print of the arrray of integers
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		printf(", ");
	}
	printf("\n");
}
