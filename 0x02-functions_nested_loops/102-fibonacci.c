#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int a = 2;
long int b = 1, c = 2;
long int d;
printf("%lu, ", b);
while (a <= 50)
{
if (a == 50)
{
printf("%lu\n", c);
}
else
{
printf("%lu, ", c);
}
d = c;
c += b;
b = d;
a++;
}
return (0);
}
