#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point. Performs simple operations based on the arg passed.
 * @argc: The number of arguments (including the program name).
 * @argv: Array of pointers to the arguments as strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*oprt)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
oprt = get_op_func(argv[2]);

if (!oprt)
{
printf("Error\n");
exit(99);
}
printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
return (0);
}
