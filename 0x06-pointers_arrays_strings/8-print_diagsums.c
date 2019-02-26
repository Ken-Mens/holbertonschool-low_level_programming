#include "holberton.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: integer pointer
 * @size: size of the integers
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	int max = size * size;

	for (; i < max; i = i + (size + 1))
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < (max) - (size - 1); i = i + (size - 1))
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
