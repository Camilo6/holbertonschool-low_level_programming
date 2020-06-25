#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}
	while (y < n && *(src + y) != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
