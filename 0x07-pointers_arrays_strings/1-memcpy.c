#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination character
 * @src: source character
 * @n: int type value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
