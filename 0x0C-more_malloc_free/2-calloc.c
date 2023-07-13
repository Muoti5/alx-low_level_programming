#include <stdlib.h>
#include "main.h"

/**
 * _calloc - This function allocates memory for an array using malloc
 *
 * @nmemb: elements of size bytes each
 * @size: number of bytes
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int arr;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}

	for (arr = 0; arr < (nmemb * size); arr++)
	{
		*((char *)(memory) + arr) = 0;
	}

	return (memory);
}
