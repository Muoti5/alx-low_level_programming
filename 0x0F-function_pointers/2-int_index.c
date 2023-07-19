#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 * @array: array of elements
 * @size: number of lements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Integer type
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (b = 0; b < size; b++)
			if (cmp(array[b]))
				return (b);
	}

	return (-1);
}
