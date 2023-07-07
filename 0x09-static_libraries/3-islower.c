#include "main.h"
/**
 * _islower - Checks if character is lower case
 * @c: The character to be checked
 * Return: 1 success, 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
