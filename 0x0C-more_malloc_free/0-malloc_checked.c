#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This function allocates memory using malloc
 *
 * @b: number of bytes allocated
 *
 * Return: pointer to the allocated memory if successful
 * Exits with a status value of 98 if allocation fails
 */
void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);

	if (h == NULL)
	{
		exit(98);
	}

	return (h);
}
