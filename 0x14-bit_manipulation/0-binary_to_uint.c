#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: converrted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len = 0;
	unsigned int con_num = 0;
	unsigned int base = 1;

	if (b == NULL)/*check if the input string is null*/
		return (0);

	while (b[len] != '\0')/*cal length of string using loop*/
		len++;

	while (len > 0)/*loop through string to convert binary to decimal*/
	{
		len--;
		if (b[len] == '0')/*check if current character is '0'*/
		{
			/* Skip '0' digits */
		}
		else if (b[len] == '1')/*check if current character is '1'*/
		{
			con_num += base;
		}
		else/*if the character is neither '0' nor '1'*/
		{
			/* Invalid character, return 0 */
			return (0);
		}

		base *= 2;
	}

	return (con_num);
}
