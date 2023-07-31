#include "lists.h"
/**
 * add_nodeint_end -  funct that adds a new node at the end of a listint_t list
 * @head: head node
 * @n: integer value
 * Return:  address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;/*set value of new node to n*/
	new_node->next = NULL;/*since it will be the last node*/

	if (*head == NULL)
		/*if list is empty make new node first node*/
	{
		*head = new_node;
	}
	else
	{
		current = *head;/*find the current last node*/
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;/*attach new node to last node*/
	}
	return (new_node);
}
