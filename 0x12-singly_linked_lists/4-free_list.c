#include "lists.h"
/**
 * free_list -  function that frees a list_t list
 * @head: first node
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head->str); /*Free the string in the current node*/
		free(head);      /*Free the current node*/
		head = next_node;
	}
}
