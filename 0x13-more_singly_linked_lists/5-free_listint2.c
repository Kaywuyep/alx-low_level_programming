#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * The function sets the head to NULL
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *h = *head;
	listint_t *next_node;

	while (h != NULL)
	{
		next_node = h->next;
		free(h);
		h = next_node;
	}

	*head = NULL;/*indicates an empty list*/
}
