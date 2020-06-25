#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a : Pointer that is parameter in the function.
 * @n : String 1
 * Return: Always dest.
 */
void reverse_array(int *a, int n)
{
	int rev;
	int k;

	for (rev = 0; rev < n; rev++)
	{
		k = a[rev];
		a[rev] = a[n - 1];
		a[--n] = k;
	}
}
