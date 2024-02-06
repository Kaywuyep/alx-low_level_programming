# include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: sucess or failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	/*Iterate through the array*/
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/*Print the value being checked*/
		if (array[i] == value)
		{
			/*If the value is found, return its index*/
			return (i);
		}
	}

	/*If the value is not found in the array, return -1*/
	return (-1);
}
