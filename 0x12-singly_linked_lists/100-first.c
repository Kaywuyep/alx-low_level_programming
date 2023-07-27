#include "lists.h"
void print_first(void) __attribute__ ((constructor));
/**
 * print_first - a function that prints an introduction before main()
 *
 * Return: vooid
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
