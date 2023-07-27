#include "lists.h"
/**
 * free_list -  function that frees a list_t list
 * @head: first node
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str); /*Free the string in the current node*/
		free(current);      /*Free the current node*/
		current = next_node;
	}
}
