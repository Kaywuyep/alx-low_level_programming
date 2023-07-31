#include "lists.h"
/**
 * sum_listint - funct that returns the sum of all the data(n)
 * @head: head node
 * Return: sum of all n values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;/*add current node's n value*/
		head = head->next;/*move to next node*/
	}

	return (sum);
}
