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
char *con;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
con =(char *)malloc(sizeof(char) * (strlen(s1)+ strlen(s2) + 1));
if (con == NULL)
return (NULL);
i = 0;
j = 0;
if (s1)
{
while (i < len1)
{
con[i] = s1[i];
i++;
}
}
if (s2)
{
while (i < (len1 + len2))
{
con[i] = s2[j];
i++;
j++;
}
}
con[i] = '\0';
return (con);
}
