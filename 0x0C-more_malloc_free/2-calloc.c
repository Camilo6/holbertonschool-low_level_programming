#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	c = malloc(nmemb * size);

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		c[i] = 0;
	}
	return (c);
}
