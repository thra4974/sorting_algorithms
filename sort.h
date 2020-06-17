#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>

/** Data Structs **/

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** Function prototypes **/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

/** Helper function prototypes **/
void swap(int *n1, int *n2);
void sort_insert(listint_t **list, listint_t *new);
listint_t *create_node(int n);
ssize_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size);
void quicksort(int *array, ssize_t low, ssize_t high, size_t size);

#endif
