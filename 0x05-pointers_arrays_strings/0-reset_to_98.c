#include "holberton.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value.
 *
 * @n: integer
 *
 * Return: 0
 */

void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
}
