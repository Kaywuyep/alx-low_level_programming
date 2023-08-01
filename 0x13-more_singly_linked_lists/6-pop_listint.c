#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: head node
 * Return: head node's data n
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;/*temporary pointer to the head node*/

	if (*head == NULL)
		return (0);/*check if list is empty*/

	data = (*head)->n;/*store data in the head node*/
	temp = *head;/*move head ptr to the next node*/
	*head = (*head)->next;/*move head ptr to next node*/
	free(temp);

	return (data);
}
