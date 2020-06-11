#include <stdio.h>
/**
 * main - Everything works here
 *
 * Return: Must always come back on 0
 **/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
