#include "main.h"
/**
 * _putchar - prints a char c to stdout
 * @c: character to be printed
 * Return: 1 sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
