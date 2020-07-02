#include "holberton.h"

/**
 * _strlen_recursion - string is a palindrome
 * @s: string char
 * Return: string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

/**
 * _str_scan - scan character string
 * @a: char
 * @b: char
 * Return: char
 */
int _str_scan(char *a, char *b)
{
	if (*a != *b)
		return (0);
	else if (a >= b)
		return (1);
	else
		return (_str_scan(a + 1, b - 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: character string
 * Return: 1 if string is a palindrome, and 0 if not
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	char *a = s;
	char *b = s + (i - 1);

	if (i == 0)
		return (1);
	return (_str_scan(a, b));
}
