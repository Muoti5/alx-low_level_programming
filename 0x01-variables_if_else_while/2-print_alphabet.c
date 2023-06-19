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
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
