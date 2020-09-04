#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next)
		free_dlistint(head->next);

	free(head);
}
