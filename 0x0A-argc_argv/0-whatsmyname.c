#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Description: This program prints its name, followed by a new line.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	for (argc = 0; argc < 1; argc++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
