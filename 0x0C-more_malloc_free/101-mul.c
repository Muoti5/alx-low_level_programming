#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Check the code
 * Description: This program multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *p;
	
	p = "Error";
	if (argc != 3)
	{
		return (p);
		_putchar('\n');
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		return (result);
	}
}
