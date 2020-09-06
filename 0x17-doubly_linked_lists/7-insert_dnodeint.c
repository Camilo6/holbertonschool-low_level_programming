#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double pointer to head
 * @idx: index of the list where new node should be added, starts at 0
 * @n: data to insert to list node
 * Return: the address of the new node, or NULL if it failed
 * if not possible to add new node at index index, don't add and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *traverse;
	unsigned int i;
	size_t list_length = dlistint_len(*h);

	traverse = *h;
	if (h == NULL) /*check if list empty*/
		return (NULL);
	new = malloc(sizeof(dlistint_t)); /* allocate size for new node */
	if (new == NULL)
		return (NULL);
	new->n = n; /* put data in new node */
	new->next = new->prev = NULL;
	if (list_length < idx)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (*h);
	}
	for (i = 0; i < idx - 1; i++) /* traverse to end of list */
	{
		traverse = traverse->next;
	}
	new->next = traverse->next;
	new->prev = traverse;
	traverse->next = new;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}

/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *@h: pointer to head of doubly linked list
 *Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
