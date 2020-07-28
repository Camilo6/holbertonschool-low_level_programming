#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *	@h: head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cont;
	const listint_t *list;

	for (list = h, cont = 0; list != NULL; cont++, list = list->next)
	{
		printf("%d\n", list->n);
	}
	return (cont);
}
