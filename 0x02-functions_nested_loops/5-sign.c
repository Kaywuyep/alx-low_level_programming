#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: number to be checked
 * Return: 1 for greater than zero, 0 equal to zero -1 less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
