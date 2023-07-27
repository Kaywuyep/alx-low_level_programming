#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first str
 * @s2: the second str
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *con; /*concatenates*/
unsigned int i, j, a, b;
/*assign to an empty string*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
con = (char *)malloc((i + j + 1) * sizeof(char));
if (con == NULL)
return (NULL);
for (a = 0; a < i; a++)
con[a] = s1[a];
for (b = 0; b < j; b++)
con[a + b] = s2[b];
con[a + b] = '\0';
return (con);
}
