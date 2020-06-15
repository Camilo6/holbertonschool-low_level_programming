#include "holberton.h"

/**
 * alphabet - prints the alphabet, from a - z, followed by a newline
 *
 * Return: 0 always
 */

void alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i++);
	}
	return;
}
