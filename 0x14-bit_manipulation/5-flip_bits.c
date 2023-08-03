#include "main.h"
/**
 * flip_bits - Returns the number of bits needed
 * to flip to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*xor- the bitwise exclusive result*/
	unsigned long int xor = n ^ m;
	unsigned int count = 0;/*keeps count of num of bit*/

	/* Count the number of set bits (1s) in the XOR result */
	while (xor != 0)
	{
		/* Use bitwise AND operation to check if the least significant bit is 1 */
		if (xor & 1)
			count++; /* Increment the count if the bit is 1 */

		/* Right-shift the XOR result to move to the next bit */
		xor >>= 1;
	}

	return (count);
}
