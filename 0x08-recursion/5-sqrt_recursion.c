#include "main.h"
/**
 * _sqrt_recursion - a function that returns natural sqrt
 * @n: int type value
 * Return: -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
int sqrt_recursion_help(int n, int sq);
int sq = 1;
return (sqrt_recursion_help(n, sq));
}
/**
 * sqrt_recursion_help - helper function to solve _sqrt_recursion
 * @sq: number to determine if square root
 * @n:  int number
 * Return: square root if natural square root, or -1 if none found
 */
int sqrt_recursion_help(int n, int sq)
{
if (n == sq * sq)
{
return (sq);
}
else if (sq < n)
{
return (sqrt_recursion_help(n, ++sq));
}
else
{
return (-1);
}
}
