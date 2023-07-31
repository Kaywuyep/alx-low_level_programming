#include "lists.h"
/**
 * add_nodeint - funct that adds a new node at the beginin of a listint_t list
 * @head: head node
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	/*Allocate memory for the new node*/
	if (new_node == NULL)
	{
		/*Memory allocation failed*/
		return (NULL);
	}

	new_node->n = n; /*Set the value of the new node to the given 'n'*/
	new_node->next = *head;
	/*Set the 'next' of the new node to the current 'head'*/
	*head = new_node; /*Make the new node the new 'head'*/

	return (new_node); /*Return the address of the new element*/
}
