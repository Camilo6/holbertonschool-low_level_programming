#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * string_nconcat -  concatenates two strings.
 * @s1: string char
 * @s2: string char
 * @n: bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, c;
	unsigned int j, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = _strlen(s1);
	d = _strlen(s2);

	if (n >= d)
	{
		n = d;
	}

	s = malloc((c + n) * sizeof(char) + 1);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < c; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
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
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
