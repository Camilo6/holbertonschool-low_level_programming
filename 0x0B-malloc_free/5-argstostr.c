#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - arguments to strings
 * Return: string
 * @ac: assf
 * @av: afsff
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0;
	char *str, *str2;

	j = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (; av[i][j] != '\0'; j++)
		{
		}
	}
	str = malloc(sizeof(char) * j);
	if (str == NULL)
		return (NULL);
	i = 0;
	for (; i < ac; i++)
	{
		for (; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];
		}
		str[k] = '\0';
		k++;
	}
	str2 = str;
	return (str2);
}
