#include "sort.h"
/**
 * bubble_sort - Sorts integers in ascending order
 * @array: array to be printed
 * @size: elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t k = 0, t = size;
	int i;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				i = array[k];
				array[k] = array[k + 1];
				array[k + 1] = i;
				print_array(array, size);
			}
		}
	}
}
