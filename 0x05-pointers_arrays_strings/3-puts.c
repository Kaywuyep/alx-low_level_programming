#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: pointer variable
 */
void _puts(char *str)
{
char *msg = str;
while (*msg != '\0')
{
_putchar(*msg);
msg++;
}
_putchar('\n');
}
