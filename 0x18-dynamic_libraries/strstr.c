#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input value
 * @needle: Input value
 * Return: if successfully zero
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
