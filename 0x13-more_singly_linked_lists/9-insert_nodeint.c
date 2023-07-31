#include "lists.h"
/**
 * insert_nodeint_at_index - funct that inserts a new node at a given position
 * @head: head node
 * @idx: index of the list where the new node should be added Index starts at 0
 * @n: int type value
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = *head;
	listint_t *new_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);/*invalid head pointer*/

	new_node = malloc(sizeof(listint_t)); /*Allocate memory for the new node*/
	if (new_node == NULL)
		return (NULL);/*memory allocation failed*/

	new_node->n = n; /*Set the value of the new node to the given 'n'*/

	if (idx == 0)
	{
		/*If the new node needs to be inserted at the beginning*/
		new_node->next = *head;
		/*Set the 'next' of the new node to the current 'head'*/
		*head = new_node; /*Make the new node the new 'head'*/
		return (new_node); /*Return the address of the new node*/
	}
	/*Traverse the list until either the index is reached or the list ends*/
	while (h != NULL && count < idx - 1)
	{
		h = h->next; /*Move to the next node*/
		count++; /*Increment the node count*/
	}
	/*If the index is greater than the number of nodes in the list*/
	if (h == NULL)
	{
		free(new_node); /*Free the memory of the new node*/
		return (NULL); /*Cannot add the new node at the given index*/
	}

	new_node->next = h->next;
	/*Set the 'next' of new node to the next node of 'head'*/
	h->next = new_node; /*Set the 'next' of 'head' to the new node*/
	return (new_node);
}
