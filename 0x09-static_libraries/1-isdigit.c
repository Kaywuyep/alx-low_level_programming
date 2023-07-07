#include "main.h"
/**
 * _isdigit - a function that checks for a digit 0 to 9
 * @c: int type number
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
