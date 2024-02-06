#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *               using the Linear skip algorithm.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *stop = NULL;

	if (list == NULL)
		return (NULL);

	temp = list;
	/* Move the express lane to the end or to the last node before NULL*/
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				temp->express->index, temp->express->n);
		temp = temp->express;
	}
	stop = temp;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	/* value potentially lies between two express nodes */
	if (temp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				temp->express->index, temp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
				temp->index, temp->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
				temp->index, stop->index);

	while (temp != stop && temp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
			temp->index, temp->n);

	if (temp == stop)
		return (NULL);
	return (temp);
}
