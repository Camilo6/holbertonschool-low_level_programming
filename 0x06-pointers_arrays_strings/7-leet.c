#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 * @n: char pointer
 *
 *
 *Return: char pointer
 */
char *leet(char *n)
{
	int let[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};

	int num[] = {52, 51, 48, 55, 49};

	int cont, cont2, x = 10;

	for (cont = 0; n[cont] != 0; cont++)
	{
		for (cont2 = 0; cont2 < x; cont2++)
		{
			if (n[cont] == let[cont2])
			{
				n[cont] = num[cont2 / 2];
			}
		}
	}
	return (n);
}
