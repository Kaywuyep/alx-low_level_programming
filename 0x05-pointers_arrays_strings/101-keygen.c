#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a function that generates random passwords
 * Return: 0
 */
int main(void)
{
int p[64], i, sum = 0, n;
srand(time(NULL));
for (i = 0; i < 64; i++)
{
p[i] = rand() % 78;
sum += p[i] + '0';
putchar(p[i] + '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
