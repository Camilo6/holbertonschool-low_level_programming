#include "holberton.h"

/**
 * times_table - create a table of multiplication facts
 *
 * Return: print to stdout the 9 times table, starting with 0.
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c / 10 != 0)
			{
				if (b != 0)
				{
					_putchar (',');
					_putchar (' ');
				}
				_putchar (c / 10 + '0');
				_putchar (c % 10 + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (c  + '0');
			}
		}
		_putchar('\n');
	}
}
