#include "main.h"
/**
 * _isupper - Checks if character is lower case
 * @c: The character to be checked
 * Return: 1 success, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
