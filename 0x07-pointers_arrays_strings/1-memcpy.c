#include "main.h"

/**
 *_memcpy - This function copies memory area.
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (src[a])
	{
		a++;
	}

	for (a = 0; a < n; a++)
	{
		src[a] = dest[a];
	}
	return (dest);
}

