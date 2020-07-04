#include <stdio.h>
/**
 *main - multiply two integers
 *@argc: argument count
 *@argv: argument array
 *Return: product of two arguments, return 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
