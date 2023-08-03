#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: A pointer to the number in which the bit needs to be set.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Create a mask with only the bit at the given index set to 1*/
	unsigned long int bit = 1 << index;

	/* Check if the index is within the valid*/
	/*range for an unsigned long int*/
	if (index >= 64) /* An unsigned long int typically has 64 bits*/
		return (-1); /* Return -1 to indicate an error*/

	/* Use bitwise OR to set the bit at the*/
	/*given index to 1 in the number 'n'*/
	*n = (*n) | bit;

	return (1); /* Return 1 to indicate success. */
}
