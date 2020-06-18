#include <stdio.h>

/**
 * main - print numbers 1 to 100
 *
 *Return: print to stdout numbers 1 to 100 except:
 *replace multiples of three print Fizz
 *replace multiples of five print Buzz
 *numbers which are multiples of both three and five print FizzBuzz
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
