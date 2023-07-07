#include <stdio.h>
#include "main.h"

/**
 * main - Starting point of the program.
 * Description: This program prints the number of arguments passed into it.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (indicating success)
 */
int main(int argc, char *argv[])
{
	int j = 0;

	while (argv[j])
	{
		j++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
