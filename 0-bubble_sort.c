#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
* 		using the Bubble sort algorithm
* @array: array to sort using the bubble sort algorithm
* @size: size of the array(number of elements in the array)
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i,j;
	
	for(i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
                		int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
                	}
		}
	}
}
