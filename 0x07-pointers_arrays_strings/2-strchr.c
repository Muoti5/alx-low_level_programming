#include "main.h"

/**
 * _strchr - This function locates a character in a string.
 * @s: String
 * @c: character
 *
 * Return: First occurence of the character c in the string s or NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] && a != '\0')
	{
		if (a == c)
		{
			return ((char *) 'a');
		}
		a++;
	}
	return ('\0');
}
