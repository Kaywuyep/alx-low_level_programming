#include <stdio.h>
/**
 * add - Function to add two numbers
 * @a: value
 * @b: value
 * Return: the sum
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Function to subtract two numbers
 * @a: value
 * @b: value
 * Return: the difference
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Function to multiply two numbers
 * @a: value
 * @b: value
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Function to divide two numbers
 * @a: value
 * @b: value
 * Return: division
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		/*Handle division by zero*/
		return (0);
	}
}
/**
 * mod - Function to calculate the remainder of the division
 * @a: value
 * @b: value
 * Return: modulo
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		/*Handle division by zero*/
		return (0);
	}
}
