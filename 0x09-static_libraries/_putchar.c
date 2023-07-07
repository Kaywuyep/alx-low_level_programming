#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character value
 * Return: 1 on success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
