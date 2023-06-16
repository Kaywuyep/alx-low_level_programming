#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number to the variable n
 * Return: 0 (success)
 */
int main(void)
{
int n;
int lastnum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;
if (lastnum > 5)
{
printf("last digit is %d and is greater than 5\n", n);
}
else if (lastnum == 0)
{
printf("last digit is %d and is 0\n", n);
}
else if (lastnum < 6 && lastnum != 0)
{
printf("last digit is %d and is less than 6 not 0\n", n);
}
return (0);
}
