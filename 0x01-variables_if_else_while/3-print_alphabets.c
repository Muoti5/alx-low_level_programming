#include <stdio.h>

/**
 *main - entry point of the program
 *
 *Description: The function generates the alphabet in lowercase,
 *            and then in uppercase, followed by a new line.
 *Return: Always 0 indicating successful execution
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);

	for (x = 'A'; x <= 'Z'; x++)
	putchar(x);
	putchar('\n');

	return (0);
}
