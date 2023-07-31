#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index of list
 * @head: head node
 * @index: the index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);/*Invalid head pointer or empty list*/

	/*Special case: delete the head node*/
	if (index == 0)
	{
		*head = (*head)->next; /*Update the head to the next node*/
		free(current); /*Free the memory*/
		return (1); /*Return 1 (succeeded)*/
	}

	/*Traverse the list until either the index is reached or the list ends*/
	while (current != NULL && count < index)
	{
		prev = current; /*Store the previous node*/
		current = current->next; /*Move to the next node*/
		count++; /*Increment the node count*/
	}

	/*If the index is greater than the number of nodes in the list*/
	if (current == NULL)
	{
		return (-1); /*Can't delete the node at the given index,*/
	}

	prev->next = current->next; /*Link the previous node to the next node*/
	free(current); /*Free the memory occupied by the node to be deleted*/

	return (1); /*Return 1 (succeeded)*/
}
