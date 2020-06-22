#include "holberton.h"

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
