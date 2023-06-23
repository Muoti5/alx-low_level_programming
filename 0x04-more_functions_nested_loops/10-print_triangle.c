#include "main.h"
/**
  *print_triangle - starting point
  *@size: Represents size of the triangle
  *Return: 0
  */
void print_triangle(int size)
{
	int i, l, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (l = size - i; l > 1; l--)
			{
				_putchar(' ');
			}
			for (m = 0; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
