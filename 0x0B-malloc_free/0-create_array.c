#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates array of characters
 * @size: size of data type variable
 * @c: character value
 * Return: NULL of size is zero
 */
char *create_array(unsigned int size, char c)
{
char *a = malloc(size);/* a = array*/
if (size == 0 || a == 0)
return (NULL);
while (size--)
a[size] = c;
return (a);
}
