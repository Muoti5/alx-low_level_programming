#include "main.h"

/**
 *print_alphabet - Funtion starts here
 *
 *Description: prints the alphabet, in lowercase, followed by a new line.
 *
 *Return: 0
 *
 */

void print_alphabet(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		_putchar(h);
	}

	_putchar('\n');
}
