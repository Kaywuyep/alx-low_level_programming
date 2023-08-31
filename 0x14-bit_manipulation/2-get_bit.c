#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index
 * @n: value
 * @index: is index starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
