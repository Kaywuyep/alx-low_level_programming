#include "main.h"
/**
 * reverse_array - a function that reverses an array of integers
 * @a: pointer integer
 * @n: int type value
 */
void reverse_array(int *a, int n)
{
int s = 0;      /*start of index*/
int e = n - 1;  /*end of index*/
int temp;       /*temporary variable*/
while (s < e)
{
temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}
