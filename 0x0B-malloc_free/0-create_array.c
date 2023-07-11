#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of string
 * @c: char
 *
 * Return: NULL if size = 0 or c
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (NULL);
	}

	while (size --)
	{
		arr[size] = c;
	}

	return (arr);
}
