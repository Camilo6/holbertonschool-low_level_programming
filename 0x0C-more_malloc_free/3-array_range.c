#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return:  the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a;
	int rango, i = 0;

	if (min > max)
		return (NULL);

	rango = (max - min) + 1;

	a = malloc(rango * sizeof(int));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	while (i < rango)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
