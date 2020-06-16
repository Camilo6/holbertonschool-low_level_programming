#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @c: Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int c)
{

	while (c != 98)
	{
		printf("%i, ", c);
		if (c > 98)
		{
			c--;
		}
		else if (c < 98)
		{
			c++;
		}
	}
	printf("%i\n", 98);
}
