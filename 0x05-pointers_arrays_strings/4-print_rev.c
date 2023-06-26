#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string in reverse
 * @s: pointer variable
 */
void print_rev(char *s)
{
int len = strlen(s);
int i = len - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

