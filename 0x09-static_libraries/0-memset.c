#include "main.h"

/**
 * _memset - This function fills memory with a constant byte.
 *
 * @s: points to the n bytes of the memory area
 * @b: Constant byte
 * @n: bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
