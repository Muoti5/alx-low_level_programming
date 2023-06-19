#include <stdio.h>

/**
 *main - entry point of the program
 *
 *Description: This function prints the alphabet in lowercase,
 *            except q and e, followed by a new line.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');

	return (0);
}
