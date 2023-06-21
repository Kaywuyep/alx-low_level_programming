#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int a;
unsigned long int i, j, next, sum;
i = 1;
j = 2;
sum = 0;
for (a = 1; a <= 33; a++)
{
if (i < 4000000 && (i % 2) == 0)
{
sum = sum + i;
}
next = i + j;
i = j;
j = next;
}
printf("%lu\n", sum);
return (0);
}
