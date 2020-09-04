#include "lists.h"

/**
 * add_dnodeint_end -
 *
 * Return: 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = NULL;

	for (current = *head; current && current->next != NULL; )
		current = current->next;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current)
	{
		current->next = new;
		new->prev = current;
	}
	else
		*head = new;
	return (new);
}
