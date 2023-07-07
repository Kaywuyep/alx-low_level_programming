#include "main.h"
/**
 * _memset - fills a block of memory witha specific value
 * @s: pointer value
 * @b: character to be used
 * @n: int type value
 * Return: new array with value fof n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
i--;
}
return (s);
}
