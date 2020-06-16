#include "holberton.h"

/**
 * times_table - create a table of multiplication facts
 *
 * Return: print to stdout the 9 times table, starting with 0.
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 1; x <= 9; x++)
	{
		if ((x * y) <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(x * y + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(x * y / 10 + '0');
			_putchar(x * y % 10 + '0');
		}

	}
	_putchar('\n');
}
