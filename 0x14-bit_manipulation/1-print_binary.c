#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: value
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int a;

	if (n == 0)
	{
		_putchar('0'); /*Print '0' for input 0*/
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		a = n >> i;
		if (a & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
}
