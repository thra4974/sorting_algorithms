#include "sort.h"

/**
 * swap - swaps two integers
 * @n1: ref to first int
 * @n2: ref to second int
 * Return: Always nothing
 */

void swap(int *n1, int *n2)
{
	int tmp = *n1;

	*n1 = *n2;
	*n2 = tmp;
}

/**
 * lomuto_partition - pivots elements
 * @array: ref ro array
 * @low: lower int
 * @high: high int
 * @size: size of array to be sorted
 * Return: integer
 */

ssize_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot = array[high];
	ssize_t p = (low - 1);
	ssize_t j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			p++;
			if (p != j)
			{
				swap(&array[p], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[p + 1])
	{
		swap(&array[high], &array[p + 1]);
		print_array(array, size);
	}
	return (p + 1);
}

/**
 * quicksort - recursive function for quicksort algorithm
 * @array: ref to array
 * @low: low end index
 * @high: high end index
 * @size: size of array
 * Return: always nothing
 */

void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	ssize_t p;

	if (low < high)
	{
		p = lomuto_partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * quick_sort - implements quick sort using lomuto partition scheme
 * @array: ref to array
 * @size: size of array
 * Return: Always nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
