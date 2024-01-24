#include "sort.h"
/**
 * partition - function to partition elements of an array
 * @array: array to partition
 * @first: first index
 * @last: last index
 * @size: array size
 * Return: integer pivot index
 */
int partition(int *array, int first, int last, size_t size)
{
	int a = first - 1, aux, b;

	for (b = first; b <= last - 1; b++)
	{
		if (array[b] < array[last])
		{
			a++;
			if (a < b)
			{
				aux = array[a];
				array[a] = array[b];
				array[b] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[a + 1] > array[last])
	{
		aux = array[a + 1];
		array[a + 1] = array[last];
		array[last] = aux;
		print_array(array, size);
	}

	return (a + 1);
}

/**
 * qs - sorts an array of integers recursively
 * @array: the array to sort
 * @first: first index
 * @last: last index
 * @size: array size
 */
void qs(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		qs(array, first, pivot - 1, size);
		qs(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - uses quick to sort array of elements
 * @array: the array to sort
 * @size: the array size
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}

