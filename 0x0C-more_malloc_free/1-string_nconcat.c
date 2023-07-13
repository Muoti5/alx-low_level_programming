#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - This function calculates the length of a string.
 * @s: String
 * Return: The number of bytes in the string pointed to by s.
 */
unsigned int _strlen(char *s)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		s++;

		a = a + _strlen(s);
	}

	return (a);
}

/**
 * string_nconcat - This function concatenates two strings
 *
 * @s1: The destination string
 * @s2: The source string
 * @n: number of bytes in the source string
 *
 * Return: NULL if the function fails || 0 indicating success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = _strlen(s1);
	unsigned int len = _strlen(s2);
	unsigned int b;
	char *space;

	if (s2 == NULL)
		return ("");
	if (s1 == NULL)
		return ("");

	space = malloc(sizeof(char) * (len + a + 1));

	if (space == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		space[a] = s1[a];
	for (b = 0; b < n && s2[b] != '\0'; b++)
		space[a + b] = s2[b];

	space[a + b] = '\0';

	return (space);
}
