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
	int diff;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			size++;
		}
		else
		{
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
