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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return ('\0');
}
