#include "sort.h"

/**
 * swap - swaps two integers
 * @n1: ref to first integer
 * @n2: ref to second integer
 * Return: Always nothing
 */

void swap(int *n1, int *n2)
{
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

/**
 * selection_sort - implements selection_sort algorithm
 * @array: pointer to array
 * @size: size of array
 * Return: Always nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		swap(&array[k], &array[i]);
		print_array(array, size);
	}
}
