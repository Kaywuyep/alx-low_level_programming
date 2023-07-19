#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function tha prints a name
 * @name: ...
 * @f: a func ptr that points to a function which
 * accepts char * arg (name)
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
/*call the function f and pass the 'name' argument*/
{
f(name);
}
}
