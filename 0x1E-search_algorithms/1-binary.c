# include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: sucess or failure
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int left;
	int right;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;/*calculate mid index*/

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");

		if (array[mid] < value)
		{/*If value is greater than mid element, search left half*/
			left = mid + 1;
		}
		else if (array[mid] > value)
		{/*If value is greater than mid element, search right half*/
			right = mid - 1;
		}
		else/* If value is found at mid index, return mid*/
			return (mid);
	}

	return (-1);
}
