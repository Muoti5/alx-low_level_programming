#include <stdio.h>
#include "main.h"

/**
 * main - Starting point of the program.
 * Description: This program prints all arguments it receives.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 indicating success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
