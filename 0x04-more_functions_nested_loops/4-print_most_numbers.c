#include "main.h"

/**
 *print_most_numbers - prints the numbers, from 0 to 9,
 *                  except 2 and 4, followed by a new line.
 *Return: Always 0
 */

void print_most_numbers(void)
{
	int n, p, q;

	p = '2';
	q = '4';

	for (n = '0'; n <= '9'; n++)
	{
		if (n != p && n != q)
			_putchar(n);
	}
	_putchar('\n');
}
