#include "lists.h"

/**
 * print_list - all the elements of a list_t list.
 * @h: pointer string
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int numnod;

	for (numnod = 0; h != NULL; numnod++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (numnod);
}
