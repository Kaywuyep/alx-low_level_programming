#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as an argument to the program.
 * Return: A pointer to the function that corresponds to the operator given
 * as a parameter. If the operator is not found, return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
for (i = 0; i < 5; i++)
{
if (strcmp(s,ops[i].op) == 0)
return (ops[i].f);
}
return (0);
}

