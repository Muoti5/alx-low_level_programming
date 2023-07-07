#include "main.h"

/**
 * _strncpy - This function copies a string
 *
 * @dest: String
 * @src: String
 * @n: length of string
 *
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
