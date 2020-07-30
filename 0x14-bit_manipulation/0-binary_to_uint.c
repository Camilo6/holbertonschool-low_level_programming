#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i = 0;
	int pow = 1;

		if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		result += (b[i] - 48) * pow;
		pow *= 2;
		i--;
	}

	return (result);
}
