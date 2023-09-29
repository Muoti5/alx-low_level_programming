#include "main.h"

/**
 * base_to_power - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int base_to_power(unsigned int base, unsigned int power)
{
	if (power == 0)
	{
		return (1);
	}

	else
	{
		return (base * base_to_power(base, power - 1));
	}
}

/**
 * print_binary - This function prints the binary representation of a number.
 *
 * @n: integer
 *
 * Return: Binary representation of a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int checker, result;
	char flag;

	flag = 0;
	checker = base_to_power(2, sizeof(unsigned long int) * 8 - 1);

	while (checker != 0)
	{
		result = n & checker;
		
		if (result == checker)
		{
			flag = 1;
			_putchar('1');
		}

		else if (flag == 1 || checker == 1)
		{
			_putchar('0');
		}
		checker >>=1;
	}
}

