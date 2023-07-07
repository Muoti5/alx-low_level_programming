#include "main.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes.
 * @s: String 1
 * @accept: String 2
 * Return: NULL or s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *c;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c = &s[a];
				return (c);
			}
			b++;
		}
		a++;
	}

	return (0);
}
