#include <stdlib.h>
#include "search_algos.h"

/**
 * create_skiplist - Creates a sorted skip list from an array of integers
 * @array: The array of integers
 * @size: The number of elements in the array
 *
 * Return: A pointer to the head of the sorted skip list, or NULL on failure
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *head, *current, *new_node;
	size_t i;

	if (array == NULL || size == 0)
		return (NULL);

	/* Create head of the skip list */
	head = malloc(sizeof(skiplist_t));
	if (head == NULL)
		return (NULL);

	head->n = array[0];
	head->index = 0;
	head->next = NULL;
	head->express = NULL;

	/* Create rest of the skip list */
	current = head;
	for (i = 1; i < size; i++)
	{
		new_node = malloc(sizeof(skiplist_t));
		if (new_node == NULL)
		{
			free_skiplist(head);
			return (NULL);
		}

		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;
		new_node->express = NULL;

		current->next = new_node;
		current = new_node;
	}

	return (head);
}

/**
 * print_skiplist - Prints the elements of a skip list
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{
	if (list == NULL)
		return;

	while (list != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
}

/**
 * free_skiplist - Frees the memory allocated for a skip list
 * @list: Pointer to the head of the skip list
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}
