#include "main.h"
/**
 * _isupper - a function that prints uppercase
 * @c: the int type value
 * Return: 1 for success 0 otherwise
 */
int _isupper(int c)
{
if (c <= 'A' && c >= 'Z')
return (1);
return (0);
}
