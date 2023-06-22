#include "main.h"
/**
 * print_square - A function a print a square
 * @size: int type value
 * @a: int type value
 * @b: int type value
 */
void print_square(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
return;
}
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
