#include "holberton.h"

/**
 *print_last_digit - function to determine last digit
 *@n: integer
 *
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
		l = n % 10;
	}
	else
	{
		l = -n % 10;
	}
	_putchar (l + '0');
	return (l);
}