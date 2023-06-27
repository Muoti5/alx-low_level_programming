#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: The string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (a = 0; a < x; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
