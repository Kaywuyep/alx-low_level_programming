#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: value
 * @m: value
 * Return: ..
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;  /*XOR the two numbers*/
	unsigned int count = 0;

	/*Count the set bits in the XOR result*/
	while (xor_result > 0)
	{
		count += xor_result & 1;  /*Add the least significant bit to the count*/
		xor_result >>= 1;  /*Right-shift to consider the next bit*/
	}

	return (count);
}
