#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	/*create a new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);/*memory allocation failed*/

	/*duplicate the given string*/
	new_node->str = strdup(str);
	new_node->len = len;
	/*update the pointers*/
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
