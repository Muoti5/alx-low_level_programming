#include <stdio.h>

/**
 * initial - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) initial()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
