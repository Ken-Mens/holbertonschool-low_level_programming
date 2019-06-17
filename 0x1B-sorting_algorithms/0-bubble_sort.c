#include "sort.h"
/**
 * bubble_sort - Sort array by bubble sorting
 * @array: integer
 * @size:  size_t struct
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, foo;
	int tempo;

	if (array == NULL || size == 0)
		return;

	for (foo = 0 ; foo < size - 1; foo++)
	{
	for (j = 0 ; j < size - foo - 1; j++)
	{
	if (array[j] > array[j + 1])
		{
		tempo = array[j];
		array[j] = array[j + 1];
		array[j + 1] = tempo;
		print_array(array, size);
		}
	}
	}
}
