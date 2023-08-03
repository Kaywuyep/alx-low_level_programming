#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: The number to get the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Create a mask with only the bit at the given index set to 1*/
	unsigned long int mask = 1UL << index;
	/*Check if the index is within the valid*/
	/*range of bits for an unsigned long int.*/
	if (index >= 64) /*An unsigned long int typically has 64 bits*/
		return (-1); /*Return -1 to indicate an error*/

	/*Use the mask to check the value of the*/
	/*bit at the given index in the number 'n'*/
	if ((n & mask) != 0)
		return (1); /*If the bit is 1, return 1.*/
	else
		return (0); /*If the bit is 0, return 0*/
}
