#include <stdlib.h>
#include "main.h"

/**
 * array_range - This function creates an array of integers.
 * @min: Minimum value
 * @max: Maximum value
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *g;
	int h;
	int p;

	if (min > max)
		return (NULL);

	h = 0;
	for (p = min; p <= max; p++)
		h++;

	g = malloc(sizeof(int) * h);
	if (g == NULL)
		return (NULL);

	p = 0;
	while (min <= max)
	{
		g[p] = min;
		p++;
		min++;
	}

	return (g);
}
