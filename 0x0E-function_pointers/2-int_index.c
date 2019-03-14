#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: array.
  * @size: size of said array.
  * @cmp: pointer to the function.
  * Return: index of first element or -1 if size <= 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);
	while (x < size)
	{
		if ((*cmp)(array[x]) != 0)
			return (x);
			x++;
	}
	return (-1);
}
