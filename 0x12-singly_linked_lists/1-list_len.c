#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: value
 * Return: number of node (n)
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
