#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - arguments to strings
 * @ac: number of arguments
 * @av: array of the arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k, cad;

	cad = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cad += 1;
		cad += 1;
	}

	p = malloc(sizeof(char) * cad + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			p[k++] = av[i][j];
		p[k++] = '\n';
	}
	p[k] = '\0';

	return (p);
}
