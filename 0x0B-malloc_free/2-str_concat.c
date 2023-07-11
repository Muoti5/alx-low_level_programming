#include "main.h"
#include <stdlib.h>

/**
  *str_concat - concatenates two strings
  *
  *@s1: 1st string
  *@s2: 2nd string
  *
  *Return: NULL (failure) or pointer to newly allocated s3
  */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int s1_size = 0, s2_size = 0, x = 0, y = 0;

	while (s1 && s1[s1_size])
	{
		s1_size++;
	}
	while (s2 && s2[s2_size])
	{
		s2_size++;
	}
	s3 = malloc(sizeof(char) * (s1_size + s2_size + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (x < s1_size)
		{
			s3[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (y < s2_size)
		{
			s3[x] = s2[y];
			x++;
			y++;
		}
	}
	s3[x] = '\0';

	return (s3);
}
