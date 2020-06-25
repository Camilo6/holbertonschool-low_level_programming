#include "holberton.h"

/**
 * _strncpy -  copies a string
 * @dest : Pointer that is parameter in the function.
 * @src : String 1
 * @n : Size the array.
 * Return: Always dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
		dest[c] = '\0';

	return(dest);
}
