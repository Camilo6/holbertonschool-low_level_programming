#include "holberton.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (primo(2, n));
}

/**
 * primo - return prime number
 * @x: integer
 * @n: integer
 * Return: 0 or 1
 */

int primo(int x, int n)
{
	if ((n % x) == 0)
	{
		return (0);
	}
	if (x == n / 2)
	{
		return (1);
	}
	++x;
	return (primo(x, n));
}
