#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /*Pointer to keep track of the previous node*/
	listint_t *next = NULL; /*Pointer to keep track of the next node*/

	while (*head)
	{
		next = (*head)->next; /*Store the next node of the current head*/
		(*head)->next = prev;
		/*Change the 'next' pointer of the current*/
		/*head to point to the previous node*/
		prev = *head; /*Move the 'prev' pointer to the current head*/
		*head = next; /*Move the 'head' pointer to the next node*/
	}

	*head = prev; /*The 'prev' ptr will be the new head of the reversed list*/

	return (*head); /*Return the new head of the reversed list*/
}
