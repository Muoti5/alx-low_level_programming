#include "main.h"

/**
 * puts_half - print the second half of the string
 *
 * @str: string to be treated
 *
 * Return: void
 */

void puts_half(char *str)
{
	int W, w;

	W = 0;
	while (str[W] != '\0')
	{
		W++;
	}

	w = W / 2;

	if (W % 2 == 1)
	{
		w++;
	}

	while (w < W)
	{
		_putchar(str[w]);
		w++;
	}
	_putchar('\n');
}
