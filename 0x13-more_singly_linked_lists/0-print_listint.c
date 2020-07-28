#include "lists.h"

/**
 * print_listint -
 *
 * Return: 
 */
size_t print_listint(const listint_t *h)
{
	size_t cont;
	const listint_t * list;

	for (list = h, cont = 0; list != NULL; cont++, list = list->next)
	{
		printf("%d\n", list->n);
	}
	return (cont);
}