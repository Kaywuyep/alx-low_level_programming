#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: pointer to the buffer which we copy the string
 * @src: tring to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_x = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_x);
}
