#include "holberton.h"
/**
 * reverse_array - reverse the contents of an array
 *@a: array that will be reversed
 *@n: size of elements in said array
 * Return: 0 on success.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n = n - 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
