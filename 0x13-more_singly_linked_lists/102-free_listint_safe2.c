size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;    /*Variable to keep track of the number of nodes freed*/
	int diff;           /*Variable to store the difference in memory addresses*/
	listint_t *temp;    /*Temporary pointer to help free nodes safely*/

	/*Check if the input pointer or the list is empty*/
	if (h == NULL || *h == NULL)
		return (0);

	/*Loop through the linked list until *h (head) points to NULL*/
	while (*h != NULL)
	{
		/*Calculate the difference in memory addresses between *h and the next node*/
		diff = *h - (*h)->next;

		/*If the difference is positive, there is no cycle (normal linked list)*/
		if (diff > 0)
		{
			/*Store the next node in temp to avoid losing the reference*/
			temp = (*h)->next;

			/*Free the current node*/
			free(*h);

			/*Move the head pointer to the next node*/
			*h = temp;

			/*Increment the node count*/
			size++;
		}
		else
		{
			/*If the difference is non-positive, there is a cycle (loop)*/

			/*Set the head pointer to NULL to break out of the loop*/
			*h = NULL;

			/*Increment the node count*/
			size++;

			/**Break the loop to avoid freeing the entire list again*/
			break;
		}
	}

	/*Set the original head pointer to NULL*/
	*h = NULL;

	/*return the total number of nodes freed*/
	return (size);
}
