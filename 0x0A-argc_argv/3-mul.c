#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * Description: This program prints the result of multiplication of 2 integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 indicating success.
 */
int main(int argc, char *argv[])
{
	int g;
	int h;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	g = strtol(argv[1], NULL, 10);
	h = strtol(argv[2], NULL, 10);
	result = g * h;

	printf("%d\n", result);
	return (0);
}
