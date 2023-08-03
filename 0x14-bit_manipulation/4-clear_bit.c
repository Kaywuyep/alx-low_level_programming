#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: A pointer to the number in which the bit needs to be cleared.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	/* Check if the index is within the valid*/
	/*range for an unsigned long int.*/
	if (index >= 64) /* An unsigned long int typically has 64 bits*/
		return (-1); /* Return -1 to indicate an error. */

	/* Invert the mask to have the bit at the given index set to 0*/
	bit = ~bit;

	/*use bitwise AND to clear the bit at the given index in the num 'n'*/
	*n = (*n) & bit;

	return (1); /* Return 1 to indicate success. */
}
