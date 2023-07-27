#include "lists.h"
/**
 * add_node_end -  a function that adds a new node at the end of a list_t list
 * @head: ptr value
 * @str: strind to be added
 * Return: address of new ellement or NULL for failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *current;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	n = (list_t *)malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL); /*Memory allocation failed*/
	/*Duplicate the given string*/
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL); /*String duplication failed*/
	}
	while (str[len])
		len++;
	n->len = len;
	/*Set the next pointer of the new node to NULL*/
	/*since it will be the last node*/
	n->next = NULL;
	/*If the list is empty, set the new node as the head*/
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	else
	{
		/*Find the last node in the list*/
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		/*Append the new node to the end of the list*/
		current->next = n;
	}
	return (n);
}
