#include "main.h"
/**
 * print_triangle - a function that prints triangles
 * @size: int type value
 */
void print_triangle(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
return;
}

for (a = 1; a <= size; a++)
{
for (b = 1; b <= size - a; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
