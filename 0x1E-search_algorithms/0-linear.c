#include "search_algos.h"
/**
*linear_search - searches for a value in an array
*@array: the pointer used  for array
*@size: the size of array
*@value: the value to search
*Return: the first index
*/
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	for (; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}

