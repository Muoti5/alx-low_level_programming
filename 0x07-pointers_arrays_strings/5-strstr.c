#include "main.h"

/**
 * _strstr - This function locates a substring.
 *
 * @haystack: String
 * @needle: String
 *
 * Return: Beginning of the located substring or null.
 */
char *_strstr(char *haystack, char *needle)
{
	int k, l, c;

	k = 0;
	c = 0;
	while (haystack[k] != '\0')
	{
		l = 0;
		while (needle[l + c] != '\0' && haystack[k + c] != '\0'
		       && needle[l + c] == haystack[k + c])
		{
			if (haystack[k + c] != needle[l + c])
				break;
			c++;
		}
		if (needle[l + c] == '\0')
			return (&haystack[k]);
		l++;
		k++;
	}

	return ('\0');
}
