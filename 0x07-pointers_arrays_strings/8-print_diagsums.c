#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: input value
* @size: input value
* Return: Void
*/
void print_diagsums(int *a, int size)
{
int total = 0;
int sum = 0;
int i = 0;
for (; i < size; i++)
{
total = total + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
sum += a[i * size + (size - i - 1)];
printf("%d,%d\n", total, sum);
}
