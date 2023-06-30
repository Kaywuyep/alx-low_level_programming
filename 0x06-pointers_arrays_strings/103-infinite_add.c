#include "main.h"
/**
* infinite_add - add two numbers to a buffer
* @n1: first string number
* @n2: second string number
* @r: Buffer to store the added numbers
* @size_r: size of the buffer
* Return: r or 0 if size is small
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a, b, c = 0;
int a1, b1, sum, len1, len2;
for (len1 = 0; n1[len1] != '\0'; len1++)
;
for (len2 = 0; n2[len2] != '\0'; len2++)
;
if (size_r <= len1 || size_r <= len2)
return (0);
a = len1 - 1;
b = len2 - 1;
r[size_r - 1] = '\0';
while (a >= 0 || b >= 0 || c != 0)
{
a1 = a >= 0 ? (n1[a] - '0') : 0;
b1 = b >= 0 ? (n2[b] - '0') : 0;
sum = a1 + b1 + c;
c = sum / 10;
r[--size_r] = (sum % 10) + '0';
a--;
b--;
}
if (size_r > 0 && r[size_r - 1] == '\0')
size_r--;
for (a = 0; size_r > a; a++)
r[a] = r[a + (len1 + len2 - size_r)];
return (r);
}
