#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: difference between *s1 and *s2
 */
int _strcmp(char *s1, char *s2)
{
for (; *s1 == *s2; s1++, s2++)
{
if (*s1 == '\0')
return (0);
}
return (*s1 - *s2);
}
