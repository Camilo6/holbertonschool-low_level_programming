#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: pointer to head of doubly linked list
 * Return: formatted list to stdout
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
