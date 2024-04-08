#include "sort.h"
/**
 * swaps - swaps and prints ints from an array without temp
 * @array: the array for printing func
 * @size: the size of array for printing func
 * @a: one int
 * @b: the other int
 */
void swaps(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * kwiksort - quick sort via lamuto partition
 */
void kwiksort(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t part = partition(array, size, low, high);

		kwiksort(array, size, low, part - 1);
		kwiksort(array, size, part + 1, high);
	}
}

/**
 * quick_sort - quickly sorts
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	kwiksort(array, size, 0, size - 1);
}

/**
 * partition - "partition" array
 */
size_t partition(int *array, size_t size, ssize_t low, ssize_t high)
{

	int i, j, pivot;

	pivot = array[high];

	for (j = low, i = j; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swaps(array, size, &array[j], &array[i++]);
		}
	}

	swaps(array, size, &array[i], &array[high]);
	return (i);
}
