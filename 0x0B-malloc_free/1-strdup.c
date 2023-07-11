#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a nw string which is a
 * duplicate of the sting str.
 *
 * @str: String to duplicate
 * Return: NULL if str = NULL or str
 */
char *_strdup(char *str)
{
	char *dup;
	int i, size;

	i = 0;
	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	dup = malloc((size + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[i] = str[i]) != '\0')
	{
		i++;
	}

	return (dup);
}
