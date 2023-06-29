#include "main.h"
/**
 * _strncat - a function that concatenates two string
 * @dest: destination string
 * @src: source string
 * @n: integer value
 * Return: to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_x = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (dest_x);
}
