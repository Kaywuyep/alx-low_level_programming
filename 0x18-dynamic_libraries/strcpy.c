#include "main.h"
/**
 * _strcpy - copies string from src to dest
 * @dest: where string will go
 * @src: where string is from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
