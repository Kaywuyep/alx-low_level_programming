#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first pointer variable
 * @b: second pointer variable
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}

