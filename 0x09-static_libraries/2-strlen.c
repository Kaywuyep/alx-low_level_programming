#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string passed
* Return: returns length of string passed
*/
int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
