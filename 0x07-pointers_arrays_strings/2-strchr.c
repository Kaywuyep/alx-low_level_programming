#include "main.h"
/**
 * _strchr - a function that locates a string in a character
 * @s: pointing string
 * @c: character value
 * Return: a pointer to char c in string s or zero(NULL)
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
if (*s == c)
{
return (s);
}
else if (*(s + 1) == c)
{
return (s + 1);
s++;
}
return (s + 1);
}
