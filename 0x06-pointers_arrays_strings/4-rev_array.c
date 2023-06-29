#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers.
 *
 * @a: name of the array
 * @n: number of elements of the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c, aux;

	c = 0;
	n = n - 1;

	while (c < n)
	{
		aux = a[c];
		a[c++] = a[n];
		a[n--] = aux;
	}
}
