#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * The function sets the head to NULL
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)/*indicates an empty list*/
		return;
	next_node = *head;

	while (next_node != NULL)
	{
		*head = next_node->next;
		free(next_node);
		next_node = *head;
	}
}
