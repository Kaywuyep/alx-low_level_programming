#include "lists.h"
/**
 * get_nodeint_at_index - funct that returns the nth node of a listint_t list
 * @head: head node
 * @index:  is the index of the node, starting at 0
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;/*variable to count nodes*/

	/*Traverse the list until either the index is reached or the list ends*/
	while (head != NULL && count < index)
	{
		head = head->next; /*move to the next node*/
		count++; /*Increment the node count*/
	}

	/*If the index is greater than the number of nodes in the list*/
	if (head == NULL)
	{
		return (NULL); /*Node does not exist, return NULL*/
	}

	return (head); /*Return the nth node*/
}
