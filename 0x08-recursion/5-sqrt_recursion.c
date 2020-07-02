#include "holberton.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer
 * Return: 0, 1 or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (real(2, n));
}

/**
 * real - return natural square
 * @x: integer
 * @y: integer
 * Return: 1 or x
 */

int real(int x, int y)
{
	if ((x * x) > y)
	{
		return (-1);
	}
	if ((x * x) == y)
	{
		return (x);
	}
	x++;
	return (real(x, y));
}
