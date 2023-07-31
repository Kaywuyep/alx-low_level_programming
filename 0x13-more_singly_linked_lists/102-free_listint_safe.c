#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Double pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current)
	{
		if (current <= current->next)
		{
			/* Store the next node before freeing the current node */
			next = current->next;
			current->next = NULL;
			current = next;
			/* Increment the element count */
			size++;
			break;
		}

		next = current->next;
		free(current);
		current = next;
		size++;
	}

	*h = NULL; /*Set the head pointer to NULL*/

	return (size);
}
