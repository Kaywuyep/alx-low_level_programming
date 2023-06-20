#include "main.h"
/**
 * print_last_digit - A function that prints last digit of a number
 * @n: the number to be printed
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
int lastnum;
lastnum = n % 10;
if (lastnum < 0)
{
lastnum = lastnum * -1;
}
_putchar(lastnum + '0');
return (lastnum);
}

