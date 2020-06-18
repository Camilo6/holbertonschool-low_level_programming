#include "holberton.h"

/**
 * print_line - draws a straight line
 *
 * @n: is the number of times print '_'
 *
 * Return: 0
 */

void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
