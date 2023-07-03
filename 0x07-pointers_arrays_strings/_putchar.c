#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - entry point
 * @c: value
 * Return: value
 */
int _putchar(char c) 
{
return write(1, &c, 1);
}
