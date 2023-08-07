#include "main.h"

/**
 * actual_sqrt_recursion - assist function to find actual root
 *
 * @s: number to find its square root
 * @i: integer to iterate through s
 *
 * Return: actual natural square root of s
 */

int actual_sqrt_recursion(int s, int i)
{
	if (i * i > s)
	{
		return (-1);
	}
	if (i * i == s)
	{
		return (i);
	}
	return (actual_sqrt_recursion(s, i + 1));
}

/**
 * _sqrt_recursion - This function returns the natural square root of a number.
 * @s: Integer
 * Return: result
 */
int _sqrt_recursion(int s)
{
	if (s < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(s, 0));
}
