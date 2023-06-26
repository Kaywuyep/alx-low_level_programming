#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string
 * @str: pointer variable
 */
void puts_half(char *str)
{
int i;
int len = strlen(str);
int start = len / 2;
if (len % 2 != 0)
{
start = (len - 1) / 2;
}
for (i = start; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
