#include "holberton.h"

/**
 * _strlen_recursion -  returns the length of a string
 * @s: char string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		return (i + 1);
	}
	return (0);
}
