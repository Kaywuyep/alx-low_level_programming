#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0; /*Variable to count the number of nodes*/

	while (h != NULL)/*loop till end of linked list*/
	{
		printf("%d\n", h->n); /*Print the current node's value*/
		h = h->next; /*Move to the next node*/
		node_count++; /*Increment the node count*/
	}

	return (node_count); /*Return the total number of nodes*/
}
