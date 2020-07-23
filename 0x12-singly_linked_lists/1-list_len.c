#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: string
 * Return: number of elements linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (i);
	}
	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
