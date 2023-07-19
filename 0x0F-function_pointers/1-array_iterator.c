#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator -Function to execute the action
 * function on each element of the array
 * @action: is a pointer to the function you need to use
 * @size: is the size of the array
 * @array: int pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (action == NULL || array == NULL)
return;

for (i = 0; i < size; ++i)
{
action(array[i]);
}
}
