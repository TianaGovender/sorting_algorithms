#include "sort.h"
#include <stdbool.h>

/**
 * i_swap - swaps 2 integers in an array
 * @i: First integer
 * @j: second integer
 */

void i_swap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * bubble_sort - sort an array in ascending order
 * @array: array of integers
 * @size: teh size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool b = false;

	if (array == NULL || size < 2)
		return;

	while (b == false)
	{
		b = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				i_swap(array + i, array + i + 1);
				print_array(array, size);
				b = false;
			}
		}
		len--;
	}
}
