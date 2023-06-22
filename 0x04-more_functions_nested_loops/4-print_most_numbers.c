#include "main.h"
/**
 * print_most_numbers - A function that prints 0 to 9 with exception of 2 and 4
 *
 */
void print_most_numbers(void)
{
int a = '0';
while (a <= '9')
{
if (!(a == '2' || a == '4'))
{
_putchar(a);
a++;
}
}
_putchar('\n');
}
