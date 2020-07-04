#include <stdio.h>
#include <stdlib.h>
/**
 *main - add positive numbers
 *@argc: argument count
 *@argv: argument array
 *Return: sum of two arguments,
 *return 1 for error, return 0 if no numbers in arg
 */

int main(int argc, char *argv[])
{
	int i;
	long int sum;
	char *p;
	int j;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			j = strtol(argv[i], &p, 10);
			if (!*p)
			{
				sum += j;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%ld\n", sum);
	return (0);
}
