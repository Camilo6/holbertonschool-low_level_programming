#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer
 * @y: integer
 * Return: 0, 1 or -1
 */

int _pow_recursion(int x, int y)
{
	int c;

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y % 2 == 0)
	{
		c = _pow_recursion(x, y / 2);
		return (c * c);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
