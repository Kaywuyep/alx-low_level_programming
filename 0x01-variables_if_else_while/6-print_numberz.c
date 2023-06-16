#include <stdio.h>
/**
 * main - A program that uses putchar to print single digit
 * Return: 0 (success)
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
