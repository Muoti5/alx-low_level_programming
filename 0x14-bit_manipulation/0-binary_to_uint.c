#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  This function converts a binary number to an unsigned int.
 * It take one argument
 * @b: Pointer to a string of 0 and 1 chars
 * Return: The converted number, or 0 if;
 * There is one or more chars in the string b thet is not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		res *= 2;
		res += b[i] - '0';
		i++;
	}

	return (res);
}
