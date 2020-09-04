#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to head of linked list
 * @n: data to insert into linked list
 * Return: the address of the new element, or NULL if it failed
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
