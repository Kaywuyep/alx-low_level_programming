#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: Pointer to the first node of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;/*count number of nodes in list*/
	long int d;/*variable that stores difference in*/
	/*memory address of current and next nodes*/

	while (head)
	{
		d = head - head->next;/*cal difference in mem address*/
		count++;/*increment node count*/
		printf("[%p] %d\n", (void *)head, head->n);
		/*print address and value of current node*/
		if (d > 0)/*if diff is positive (no loop detected)*/
			head = head->next;/*move to next node*/
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			/*print address and value of next node*/
			break;/*break to avoid infinite looping*/
		}
	}

	return (count);
}
