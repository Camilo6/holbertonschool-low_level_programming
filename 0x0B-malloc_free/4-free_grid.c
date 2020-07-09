#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer
 * @height: height to the array
 */

void free_grid(int **grid, int height)
{
	for (heigth = height - 1; height >= 0; height--)
	{
		free(*(grid + height));
	}
	free(grid);
}
