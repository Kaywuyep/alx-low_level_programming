#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;/*temm is variable to represent next node*/

	while (head)
	{
		temp = head->next;/*save pointer to the next node*/
		free(head);/*free current node*/
		head = temp;/*move to the next node*/
	}
}
