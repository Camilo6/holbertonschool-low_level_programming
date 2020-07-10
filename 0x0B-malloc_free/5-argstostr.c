#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: character string
 * @s2: character string
 * Return: pointer that points to a newly allocated space in memory
 *The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i;
	int j;
	int c;
	int d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}
	return (a);
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


/**
 * argstostr - arguments to strings
 * Return: string
 * @ac: assf
 * @av: afsff
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int sum = 0;
	int i = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		sum = sum + _strlen(av[i]);
		i++;
	}

	p = (char *)malloc((sum * sizeof(char)) + ac + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		p = str_concat(p, av[i]);
		i++;
	}
	return (p);


}
