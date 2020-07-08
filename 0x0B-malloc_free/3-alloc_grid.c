#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: colums
 * @height: rows
 * Return: pointer 2d
 */

int **alloc_grid(int width, int height)
{
	int i, c;
	int **pt;

	if (width == 0 || height == 0)
	{
		return (0);
	}
	pt = malloc(sizeof(int *) * height);

	if (pt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pt = malloc(sizeof(int) * width);
		if (pt[i] == '\0')
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pt[i][j] = 0;
		}
	}
	return (pt);
}
