#include "main.h"
/**
 * print_line - a function that print a straight line
 * @n: int type number
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
{
int a;
for (a = 0; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
}
}
