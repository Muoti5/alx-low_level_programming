#include <stdio.h>

/**
 *main - entry point of the program
 *
 *Description: The function prints the alphabet in lowercase,
 *             followed by a new line.
 *Return: always 0 indicating successful execution
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
