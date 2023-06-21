#include "main.h"

/**
 *print_last_digit - prints the last digit of a number.
 *
 *@d: last digit of a number
 *
 *Return: last digit of number
 */
int print_last_digit(int d)
{
	int z;

	z = d % 10;
	if (z < 0)
	{
		z = z * -1;
	}
	_putchar(z + '0');

	return (z);
}
