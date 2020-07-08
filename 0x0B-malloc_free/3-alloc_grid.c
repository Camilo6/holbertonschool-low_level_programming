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
	int i, j;
	int **pt;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	pt = (int**) malloc(height * sizeof(*pt));

	if (pt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pt[i] = malloc(width * sizeof(int));
		if (pt[i] == '\0')
		{
			for (j = 0; j < i; j++)
			{
				free(pt[j]);
			}
			free(pt);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pt[i][j] = 0;
		}
	}
	return (pt);
}
