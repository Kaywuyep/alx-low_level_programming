#include "main.h"
/**
 * _putchar - writes a function to char c
 * @c: character type value
 * Return: the value to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
