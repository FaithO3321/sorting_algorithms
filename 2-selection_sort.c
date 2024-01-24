#include "sort.h"
/**
 * selection_sort - selects array of integers in ascending order
 * @array: array to be printed
 * @size: elements in array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, less, temp, swap;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (less = i, j = i; j < size; j++)
			if (array[j] < array[less])
			{
				less = j;
				swap = 1;
			}
		if (swap == 1)
		{
			temp = array[less];
			array[less] = array[i];
			array[i] = temp;
			print_array(array, size);
			swap = 0;
		}
	}
}
