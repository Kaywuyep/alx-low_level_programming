#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: ptr const list_t
 * Return: number of nodes(n)
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	}
	return (n);
}
