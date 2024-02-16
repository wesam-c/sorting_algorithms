#include "sort.h"

/**
 * swap - swaps 2 integers 
 *                  using the Selection sort algorithm
 * @a: first int to swap
 * @b: second int to swap
*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order 
 *                  using the Selection sort algorithm
 * @array: array to sort
 * @size: size of the given array
*/
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}