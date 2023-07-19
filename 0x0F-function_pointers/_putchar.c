#include <stdio.h>
#include "function_pointers.h"
/**
 * _putchar - writes character to stdout
 * @c: character to be used
 * Return: 1 success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
