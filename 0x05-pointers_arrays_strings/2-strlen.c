#include "main.h"
/**
 * _strlen - a funtion that returns length of the string
 * @s: pointer variable
 * Return: the length of the string
 */
int _strlen(char *s)
{
int a;
for (a = 0; *s != '\0'; s++)
a++;
return (a);
}
