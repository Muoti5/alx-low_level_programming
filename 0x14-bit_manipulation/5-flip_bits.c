#include "main.h"

/**
  * flip_bits - This function returns the no. of bits needed to flip
  * to get from one number to another
  * @n: int n
  * @m: int m
  * Return: no. of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
