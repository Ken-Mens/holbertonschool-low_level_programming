#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: array to be iterated through
 * @size: size of the array
 * @value: value to be searched for
 * Return: index value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = 0, mid = 0;

	if (array == NULL)
		return (-1);

	if (left > right)
		return (-1);

	right = size - 1;
	while (left <= right)
	{
		print_away(array, left, right);
		mid = (left + right) / 2;
		if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
/**
 * print_away - print function for array
 * @array: array to be iterated through
 * @start: start position
 * @end: end position
 * Return: index value
 */
void print_away(int *array, size_t start, size_t end)
{
	size_t idx = start;

	printf("Searching in array:");
	for (; idx < end; idx++)
		printf(" %d,", array[idx]);
	printf(" %d\n", array[end]);
}
