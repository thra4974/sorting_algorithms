#include "sort.h"

/**
 * insertion_sort_list - sorts a double linked list in ascending order
 * @list: reference to dlist
 * Return: nothing
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *sorted_list  = NULL;
	listint_t *cur = *list;

	while (cur != NULL)
	{
		listint_t *next = cur->next;

		cur->prev = cur->next = NULL;
		sort_insert(&sorted_list, cur);
		cur = next;
		print_list(sorted_list);
	}
	*list = sorted_list;

}

/**
 * sort_insert - sorts a list_t dlist
 * @list: double pointer to doubly linked list
 * @new: ref to new list
 * Return: nothing
 */

void sort_insert(listint_t **list, listint_t *new)
{
	listint_t *cur;

	if (*list == NULL)
		*list = new;

	else if ((*list)->n >= new->n)
	{
		new->next = *list;
		new->next->prev = new;
		*list = new;
	}
	else
	{
		cur = *list;

		while (cur->next != NULL && cur->next->n < new->n)
		{
			cur = cur->next;
			print_list(*list);

		}
		new->next = cur->next;
		if (cur->next != NULL)
			new->next->prev = new;
		cur->next = new;
		new->prev = cur;
	}
}
