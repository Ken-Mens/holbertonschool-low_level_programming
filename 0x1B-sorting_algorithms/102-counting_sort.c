#include "sort.h"
/**
  * counting_sort - C program that sorts using counting algorithm
  * @array: array to be sorted
  * @size: size of array
  * Return: void
  */
void counting_sort(int *array, size_t size)
{
	int x = 0, y, range, max = 0, cpsize = size;
	int *cparray, *counting = NULL;

	if (array == NULL || cpsize < 2)
		return;

	for (; x < cpsize; x++)
	{
		if (array[x] > max)
			max = array[x];
	}
	range = max + 1;
	counting = malloc(range * sizeof(int));
	for (x = 0; x < range; x++)
	{
		for (y = 0; y < cpsize; y++)
		{
			if (x == array[y])
				counting[x]++;
		}
	}
	for (x = 1; x < range; x++)
		counting[x] += counting[x - 1];
	print_array(counting, range);

	cparray = malloc(cpsize * sizeof(int));
	for (x = 0; x < cpsize; x++)
		cparray[x] = array[x];
	for (x = 0; x < cpsize; x++)
	{
		array[counting[cparray[x]] - 1] = cparray[x];
		cparray[x]--;
	}
	free(counting);
	free(cparray);
}
