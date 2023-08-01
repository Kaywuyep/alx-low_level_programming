#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: Pointer to the first node of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visited[1024] = {NULL};/*Hash tble for visited nodes*/
	size_t i;

	while (current != NULL)
	{
		/*Check if the current node is already visited*/
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		/*Add the current node to the visited array*/
		visited[count] = current;
		count++;
		/*Print the current node*/
		printf("[%p] %d\n", (void *)current, current->n);
		/*Move to the next node*/
		current = current->next;
	}

	return (count);
}
