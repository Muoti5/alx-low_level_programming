#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index.
 * @n: pointer to binary
 * @index: index of the bit you want to set
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}
