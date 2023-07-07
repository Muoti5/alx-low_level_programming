#include "main.h"

/**
 *_strlen - returns the length of a string
 *
 * @s: String to count
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
        int d;

        d = 0;

        while (*s != '\0')
        {
                d++;
                s++;
        }

        return (d);
}
