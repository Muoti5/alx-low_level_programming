#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index
 * @n: The bit
 * @index:Index of the bit we want to set
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	return ((*n |= 1 <<index) ? 1: -1);
}
