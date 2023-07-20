#include "variadic_functions.h"
/**
* sum_them_all - sum of variadic variable
* @n:const
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list num;
unsigned int i, sum;
sum = 0;
if (n == 0)
{
return (0);
}
va_start(num, n);
for (i = 0; i < n; i++)
{
sum += va_arg(num, int);
}
va_end(num);
return (sum);
}
