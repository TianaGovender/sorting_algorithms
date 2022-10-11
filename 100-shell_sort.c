#include "sort.h"

/**
 * swap_i - Swap two integers in an array.
 * @i: The first integer to swap.
 * @j: The second integer to swap.
 */
void swap_i(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t g, i, j;

	if (array == NULL || size < 2)
		return;

	for (g = 1; g < (size / 3);)
		g = g * 3 + 1;

	for (; g >= 1; g /= 3)
	{
		for (i = g; i < size; i++)
		{
			j = i;
			while (j >= g && array[j - g] > array[j])
			{
				swap_i(array + j, array + (j - g));
				j -= g;
			}
		}
		print_array(array, size);
	}
}
