#include <stdio.h>
/**
 * main - A program that prints base 16
 * Return: 0 (success)
 */
int main(void)
{
char digit = '0';
while (digit <= '9')
{
putchar(digit);
digit++;
}
digit = 'a';
while (digit <= 'f')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
