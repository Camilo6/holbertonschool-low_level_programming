#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: pointer to head of linked list
 *@index: index is the index of the node, starting from 0
 *Return: returns nth node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	/* traverse through list, stopping one before `index` position */
	for (i = 0; i < index; i++)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
	}

	/* check if node exists */
	if (current)
		return (current);
	else
		return (NULL);
}
