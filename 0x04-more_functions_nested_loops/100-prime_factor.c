#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * main - A program that prints prime factors
 * Return: 0
 */
int main(void)
{
int c;
long d = 612852475143;
for (c = (int) sqrt(d); c > 2; c++)
{
if (d % c == 0)
{
printf("%d\n", c);
break;
}
}
return (0);
}
