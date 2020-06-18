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
	int c, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (j = 1; j < c; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
