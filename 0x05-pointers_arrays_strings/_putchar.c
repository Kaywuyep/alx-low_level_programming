#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the characters c to stdout
 * @c: the character to print
 * Return: 1 for success
 */
int _putchar(char c)
{
return (write (1, &c, 1));
}
