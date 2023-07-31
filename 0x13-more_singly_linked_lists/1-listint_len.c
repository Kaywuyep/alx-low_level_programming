#include "lists.h"

/**
 * listint_len - funct that returns the num of elmts in a linked listint_t list
 * @h: head node
 * Return: number of counted nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /*variable to count node*/

	while (h != NULL)
	{
		h = h->next;/*move to the next node*/
		count++;/*increament node count*/
	}
	return (count);
}
