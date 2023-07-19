#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * in an array
 * @array: array to be used
 * @size:  is the number of elements in the array
 * @cmp: is a pointer to the function to be used
 * to compare values
 * Return: no element matches, return -1
 *  returns the index of the first element for
 *  which the cmp function does not return 0
 *  If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
