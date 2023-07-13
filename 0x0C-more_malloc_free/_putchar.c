#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: charcter value
 * Return: 1 success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
