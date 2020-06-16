#include "holberton.h"

/**
 *print_last_digit - function to determine last digit
 *@n: integer
 *
 *Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int num;

	num = r % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
