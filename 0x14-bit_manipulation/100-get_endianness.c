#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	/* Convert the memory representation of 'num' into a char pointer */
	char *check = (char *)&num;

	/* If the value of the first byte is 1, the system is little endian */
	if (*check == 1)
		return (1);/*little endian*/
	else
		return (0);/*big endian*/
}
