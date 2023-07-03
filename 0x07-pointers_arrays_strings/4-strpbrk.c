#include "main.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes.
 * @s: String 1
 * @accept: String 2
 * Return: NULL or s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	b = 0;

	if (s[a] == '\0' || accept[b] == '\0')
	{
		return ('\0');
	}
	while (s[a] != '\0')
	{
		c = 0;
		while (c != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s);
			}
		c++;
		}
	}

	return (0);
}
