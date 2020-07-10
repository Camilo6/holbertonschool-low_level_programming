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
	int i, j, len = 0;
	int k = 0;
	char *str;

	if (ac == 0 || av == '\0')
		return ('\0');

	for (i = 0; i < ac ; i++)
	{
		len += _strlen(av[i]);
	}

	len = len + ac;
	str = malloc(sizeof(char) * len + 1);

	if (str == '\0')
	{ return ('\0'); }

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);
}

/**
 * _strlen -  returns the length of a string.
 *
 * @s: character
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int c;

	while (*(s + c))
	{
		c++;
	}

	return (c);
}
