#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: char value
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len = 0;
	unsigned int result = 0, base = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);  /*Return 0 if a character is not 0 or 1*/
		}
		len++;
	}
	while (len > 0)
	{
		len--;
		if (b[len] == '1')
		{
			result += base;
		}
		base *= 2;
	}
	return (result);
}
