#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index
 * @n: Integer
 * @index: index of the bit you want to get
 * Return: Value of the bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int value;
	
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	mask = 1 << index;
	value = n & mask;
	return (value != 0);
}
