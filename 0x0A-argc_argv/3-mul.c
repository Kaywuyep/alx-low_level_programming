#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the multiplication of two integers
* @argc: argument count
* @argv: argument vector
* Return: 0 success, otherwise 1
*/
int main(int argc, char *argv[])
{
int i, j;
if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i *j);
return (0);
}
printf("Error\n");
return (1);
}
