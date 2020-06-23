#include "holberton.h"

/**
 * rev_string -  reverses a string.
 *
 * @s: string
 *
 */

void rev_string(char *s)
{
	int i;
	int j;
	char a;
	char b;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++)
	{
		a = s[i];
		b = s[j];
		s[j] = a;
		s[i] = b;
		i--;
	}
}
