#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: integer pointer
 * @n: number of elements
 *
 * Return: array
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
