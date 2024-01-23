#include "sort.h"
/**
 * swap_nums - Swaps two integers in an array
 * @i: first integer
 * @j: second integer
 */
void swap_nums(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * bubble_sort - Sorts array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, length = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (a = 0; a < length - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swap_nums(array + a, array + a + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		length--;
	}
}
