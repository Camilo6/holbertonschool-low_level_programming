#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - unction returns a pointer to a new string which is a duplicate of
 * the string str
 * @str: string
 * Return: string copy
 */

char *_strdup(char *str)
{
	int i;
	char *s = malloc(i);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			*(s + i) = *(str + i);
		}
	}
	void free(void *s);
	return (s);
}
