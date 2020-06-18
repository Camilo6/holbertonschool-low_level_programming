#include "holberton.h"

/**
 * print_square - prints square
 *
 * @size: size of square
 *
 * Return: 0
 */

void print_square(int size)
{
	int c, j;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
