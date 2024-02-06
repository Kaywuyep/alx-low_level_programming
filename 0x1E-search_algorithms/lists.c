#include "search_algos.h"

/**
 * create_node - Creates a new node for the linked list
 * @n: The value to store in the node
 * @index: The index of the node in the list
 *
 * Return: A pointer to the newly created node, or NULL on failure
 */
listint_t *create_node(int n, size_t index)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

/**
 * create_list - Creates a sorted linked list from an array of integers
 * @array: The array of integers
 * @size: The number of elements in the array
 *
 * Return: A pointer to the head of the sorted linked list, or NULL on failure
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *head = NULL;
        listint_t *current = NULL;
	listint_t *new_node;
	size_t i;

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_node = create_node(array[i], i);
		if (new_node == NULL)
		{
			free_list(head);
			return (NULL);
		}

		if (head == NULL)
			head = new_node;
		else
			current->next = new_node;

		current = new_node;
	}

	return (head);
}

/**
 * print_list - Prints the elements of a linked list
 * @list: Pointer to the head of the linked list
 */
void print_list(const listint_t *list)
{
	while (list != NULL)
	{
		printf("%d", list->n);
		if (list->next != NULL)
			printf(" -> ");
		list = list->next;
	}
	printf("\n");
}

/**
 * free_list - Frees the memory allocated for a linked list
 * @list: Pointer to the head of the linked list
 */
void free_list(listint_t *list)
{
	listint_t *temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}
