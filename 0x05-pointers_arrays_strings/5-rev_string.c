#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, length;
	char x;

	length = _strlen(s);

	for (a = 0; a < length/2; a++)
	{
		x = *(s + a);
		*(s + a) = *(s + length -1 -a);
		*(s + length -1 -a) = x;
	}
}
