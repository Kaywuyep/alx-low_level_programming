#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: int type number
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
