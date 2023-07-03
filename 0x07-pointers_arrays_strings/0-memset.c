#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte
 * @s: character pointer to be used
 * @b: char type value
 * @n: unsigned int type value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
