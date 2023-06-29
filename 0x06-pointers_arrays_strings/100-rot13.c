#include "main.h"
/**
* rot13 - Encode using rot13
* @str: pointer to string to be encoded
* Return: str
*/
char *rot13(char *str)
{
int a, b;
char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; b <= 51; b++)
{
if (str[a] == s1[b])
{
str[a] = s2[b];
break;
}
}
}
return (str);
}
