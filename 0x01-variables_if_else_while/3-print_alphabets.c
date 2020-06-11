#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 * return - 0 always
 */

int main(void)
{
	char j;
	char u;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
		putchar('\n');
	}
	return (0);
}
