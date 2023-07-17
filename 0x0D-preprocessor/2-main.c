#include "file.h"
#include "file.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
const char *filename;
filename = __FILE__;
printf("%s\n", filename);
return (0);
}
