#include "main.h"

/**
  *print_alphabet_x10 - Funtion starts here
  *
  *Description: prints the alphabet, in lowercase, followed by a new line.
  *
  *Return: 0
  *
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
