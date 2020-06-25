#include "holberton.h"

/**
 * *_strcmp - plus two strings
 *
 * @s1 : Pointer that is parameter in the function.
 * @s2 : String 1
 * Return: Always dest.
 */

int _strcmp(char *s1, char *s2)
{

	int c;
	int res;
	int x;
	int y;

	for (c = 0; s1[c] != '\0' || s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
		{
			x = s1[c];
			y = s2[c];
			res = x - y;
			break;
		}
		else
		{
			res = 0;
		}
	}
	return (res);
}
