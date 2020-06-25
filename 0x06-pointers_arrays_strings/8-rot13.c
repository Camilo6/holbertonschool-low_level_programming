#include "holberton.h"

/**
 * rot13 - encodes a string.
 *@n: char pointer
 *Return: char pointer
 */
char *rot13(char *n)
{
	int cont, cont2, x = 52;

	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char nop[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (cont = 0; n[cont] != 0; cont++)
	{
		for (cont2 = 0; cont2 < aux; cont2++)
		{
			if (n[cont] == abc[cont2])
			{
				n[cont] = nop[cont2];
				break;
			}
		}
	}
	return (n);
}
