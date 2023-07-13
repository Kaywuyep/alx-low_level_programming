#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: int type value
 * Return: null if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int a, b, c, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++);
for (b = 0; s2[b] != '\0'; b++);
if (n > b)
n = b;
c = a + n;
s = malloc(c + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < c; i++)
if (i < a)
s[i] = s1[i];
else
s[i] = s2[i - a];
s[i] = '\0';

return (s);
}
