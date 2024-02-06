#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        of integers using Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located,
 * or -1 if not found or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL) /* Check if the array is NULL*/
		return (-1);

	low = 0; /*Initialize low boundary*/
	high = size - 1; /*Initialize high boundary*/

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		/*Print the value being checked*/

		if (array[pos] == value)
		{/*If value is found at pos index, return pos*/
			return (pos);
		}
		else if (array[pos] < value)
		{/*If value is greater than element at pos, search right half*/
			low = pos + 1;
		}
		else /*If value is smaller than element at pos, search left half*/
			high = pos - 1;
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);

	/*If value is not found in the array, return -1*/
	return (-1);
}
