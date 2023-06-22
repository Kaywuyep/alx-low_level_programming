#include "main.h"
/**
 * print_diagonal - function that prints diagonal line
 * @n: int type number
 *
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
