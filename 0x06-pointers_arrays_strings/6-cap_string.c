#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to be used
 * Return: the strlen(str)
 */
char *cap_string(char *str)
{
int i = 0, j;
int b = 13;
char a[] = {' ','\t', '\n', ',' ,';' ,'.' ,'!', '?', '"', '(', ')', '{', '}'};
while (str[i])
{
j = 0;
while (j < b)
{
if ((i == 0 || str[i - 1] == a[j]) && (str[i] >= 'a' && str[i] <= 'z'))
str[i] -= ' ';
j++;
}
i++;
}
return (str);
}
