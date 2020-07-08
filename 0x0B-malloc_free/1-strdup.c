#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - unction returns a pointer to a new string which is a duplicate of
 * the string str
 * @str: string
 * Return: string copy
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++);
	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[i] = '\0';
	return (s);
}
