#include "search_algos.h"

/**
 * Birecursive - Recursive helper function for advanced_binary
 *
 * @array: Pointer to the first element of the array to search in
 * @low: The lowest index of the subarray to search in
 * @high: The highest index of the subarray to search in
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int Birecursive(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return (Birecursive(array, low, mid, value));
		}
		else if (array[mid] < value)
		{
			return (Birecursive(array, mid + 1, high, value));
		}
		else
		{
			return (Birecursive(array, low, mid - 1, value));
		}
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (Birecursive(array, 0, size - 1, value));
}
