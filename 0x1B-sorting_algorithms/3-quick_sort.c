#include "sort.h"
/**
 * quick_sort - calls quick sort
 * @array: array field
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || *array == 0 || size == 0)
		return;
	sort(array, 0, size - 1, size);
}
/**
 * sort - calls sort
 * @array: array field
 * @lo: element in field
 * @hi: element in field
 * @size: size of array
 * Return: void
 */
void sort(int *array, size_t lo, size_t hi, size_t size)
{
	size_t pivot = NULL;
	size_t last = (size - 1);

	if (hi < lo)
		return;

	pivot = partition(array, lo, hi, size);
	if (pivot > lo)
		sort(array, lo, pivot - 1, size);
	if (pivot < last)
		sort(array, pivot + 1, hi, size);
}
/**
 * partition - partitions elements of array
 * @array: array to be partitioned
 * @min: element
 * @idx: other element to be partitioned through array
 * @size: size of array
 * Return: element partitioned
 */
size_t partition(int *array, size_t min, size_t idx, size_t size)
{
	size_t foo = NULL;

	foo = min;
	while (foo < idx)
	{
		if (array[foo] < array[idx])
		{
			if (foo != min)
			{
				swap(&array[min], &array[foo]);
				print_array(array, size);
			}
			min++;
		}
		foo++;
	}
	if (array[min] > array[idx])
	{
		swap(&array[min], &array[idx]);
		idx = min;
		print_array(array, size);
	}
	return (idx);
}

/**
 * swap - swaps elements
 * @lo: first element
 * @hi: second element
 * Return: void
 */
void swap(int *lo, int *hi)
{
	int tmp = *lo;

	*lo = *hi;
	*hi = tmp;
}
