#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: value 
 * @index: index value
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1UL << index;

	if (index >= 64)
		return (-1);

	*n = (*n) & ~bit;
	return (1);
}
