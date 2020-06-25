#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @i : pointer
 * Return: Always i.
 */
char *string_toupper(char *i)
{
	int j;
	int x;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] > 96 && i[j] < 123)
		{
			x = i[j];
			x = x - 32;
			i[j] = x;
		}
	}
	return (i);
}
