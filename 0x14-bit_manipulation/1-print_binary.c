#include "main.h"

/**
 * print_binary - func that prints the binary representation of a number
 * @n: unsigned long int value
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int a;

	/*Loop through each bit of the number from the most significant bit*/
	/*(bit 63) to the least significant bit (bit 0)*/
	for (i = 63; i >= 0; i--)
	{
		/*Shift the number 'n' to the right by 'i' positions to bring*/
		/*the desired bit to the rightmost position*/
		a = n >> i;

		/*Check if the rightmost bit of the current value(a) is 1*/
		if (a & 1)
		{
			/*If it's 1, print '1' and update the count*/
			/*variable to indicate that 1 is encountered*/
			_putchar('1');
			count++;
		}
		else if (count)
		{
			/*If it's 0 and count is not zero*/
			/*(meaning we already encountered 1), print '0'*/
			_putchar('0');
		}
	}
	/*If count is still zero, it means the original*/
	/*number was zero, so we need to print '0'*/
	if (count == 0)
	{
		_putchar('0');
	}
}
