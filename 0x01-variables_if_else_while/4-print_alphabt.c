#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Everything works here
 *
 * Return: Must always come back on 0
 */
int main(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		if ((j != 'q') && (j != 'e'))
		{
			putchar(j);
		}
		j++;
	}
	putchar('\n');
	return (0);
}
