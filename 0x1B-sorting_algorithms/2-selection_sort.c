#include "sort.h"
/**
 * selection_sort - sorts an array in integers
 * @array: integer
 * @size:  size_t struct
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t ladee, bladaa;
	size_t foo;
	int tempo;

	for (ladee = 0; ladee < size - 1; ladee++)
	{
		foo = ladee;
		for (bladaa = ladee + 1; bladaa < size; bladaa++)
		{
			if (array[foo] > array[bladaa])
			{
				foo = bladaa;
			}
		}
		if (foo != ladee)
		{
			tempo = array[ladee];
			array[ladee] = array[foo];
			array[foo] = tempo;
			print_array(array, size);
		}
	}
}
