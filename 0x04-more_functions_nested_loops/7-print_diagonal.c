#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of times the character \ should be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
