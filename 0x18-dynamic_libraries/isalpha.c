#include "main.h"
/**
 * _isalpha - Check for alphabet characters
 * @c: The character to be checked
 * Return: 1 is chaacter is present 0 if absent
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
