#include "sort.h"

/**
 * swap - swaps the place of two integers
 * @n1: pointer to first integer
 * @n2: pointer to second integer
 * Return: nothing
 */

void swap(int *n1, int *n2)
{
	int tmp = *n1;
	*n1  = *n2;
	*n2 = tmp;
}

/**
 * bubble_sort - implements bubble sorting algorithm
 * @array: pointer to array
 * @size: size of array
 * Return: nothing.
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
