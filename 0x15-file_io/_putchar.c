#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: value
 * Return: value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
