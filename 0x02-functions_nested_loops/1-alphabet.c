#include "holberton.h"

/**
 * alphabet - prints the alphabet, from a - z, followed by a newline
 *
 * Return: 0 always
 */

void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar('\n');
	return;
}
