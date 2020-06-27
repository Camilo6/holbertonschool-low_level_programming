#include "holberton.h"

/**
 * _memcpy - that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: integer unsigned
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
