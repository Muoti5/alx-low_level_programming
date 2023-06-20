#include "main.h"

/**
 *main - Entry point of the program
 *
 *Description: prints the alphabet 10 times,
 *            in lowercase, followed by a new line.
 *
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a = 0;
	char h;

	while (a < 10)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar(h);
		}

	_putchar('\n');
	a++;
	}
}
