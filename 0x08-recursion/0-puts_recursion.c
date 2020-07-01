#include "holberton.h"

/**
 * _puts_recursion -  prints a string
 * @s: char string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\0');
	}
}
