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
int a, b, c;
for (a = 0; r[a] != '\0' && r[a] <= size_r; a++)
{
for (b = 0; n1[b] != '\0'; b++)
{
for (c = 0; n2[c] != '\0'; c++)
{
n1[b] = n2[c];
b++;
}
r[a] = n1[b];
a++;
}
return (r);
}
return (0);
}
