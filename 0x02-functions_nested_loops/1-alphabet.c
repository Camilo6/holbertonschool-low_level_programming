#include "holberton.h"

/**
 *print_alphabet - prints the alphabet, from a - z, followed by a newline
 *
 * Return: void
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
