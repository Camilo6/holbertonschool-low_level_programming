#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *list;
	size_t count;

	for (list = h, count = 0; list != NULL; count++, list = list->next)
		;
	return (count);
}
