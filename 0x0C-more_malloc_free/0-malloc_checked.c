#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory using malloc.
 * @b: unsigned int
 * Return: a pointerto the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
