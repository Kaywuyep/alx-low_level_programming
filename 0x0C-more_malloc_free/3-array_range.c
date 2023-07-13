#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *arr; /*array of integers*/
int i;

if (min > max)
return (NULL);

arr = (int *)malloc(((max - min) + 1) * sizeof(int));

if (arr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
arr[i] = min;

return (arr);
}
