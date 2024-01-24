#include "sort.h"
/**
 * swap_nums - swaps two integers to sort
 * @i: first integer
 * @j: second integer
 */
void swap_nums(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * shell_sort - uses Knuth interval sequence to sort integers
 * @array: array of integers
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, a, b;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (a = gap; a < size; a++)
		{
			b = a;
			while (b >= gap && array[b - gap] > array[b])
			{
				swap_nums(array + b, array + (b - gap));
				b -= gap;
			}
		}
		print_array(array, size);
	}
}
