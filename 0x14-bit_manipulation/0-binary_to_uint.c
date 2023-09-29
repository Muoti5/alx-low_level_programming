#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 *
 * @b: string of 0s and 1s
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int num;

	num = 0;

	if (!b)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		num <<= 1;

		if (b[index] == '1')
			num++;
	}

	return (num);
}
