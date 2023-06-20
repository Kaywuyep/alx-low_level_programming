#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: the character to print
 * Return: 1 for letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
