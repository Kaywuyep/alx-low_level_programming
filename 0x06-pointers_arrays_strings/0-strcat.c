#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string to be used
 * @src: source string to be used
 * Return: the resulting dest
 */
char *_strcat(char *dest, char *src)
{
char *dest_x = dest;
while (*dest_x != '\0')
{
dest_x++;
}
while (*src != '\0')
{
*dest_x = *src;
dest_x++;
src++;
}
*dest_x = '\0';
return (dest);
}
