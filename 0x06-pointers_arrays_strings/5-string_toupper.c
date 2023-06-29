#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function that changes all lowercase to uppercase
 * @str: the string to be used
 * Return: the string
 */
char *string_toupper(char *str)
{
char *s = str;
while (*s)
{
*s = toupper(*s);
s++;
}
return (str);
}
