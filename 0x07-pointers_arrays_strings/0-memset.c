#include "holberton.h"

/**
 * _memset - that fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
