#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 * return - 0 always
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
