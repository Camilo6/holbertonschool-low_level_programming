#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: double pointer to head of list
 * @index: position of node to delete, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *new = NULL;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}
	for (count = 0; count < index; count++)
	{
		new = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next; /* change head of list */
	else if (current->next)
		new->next = current->next; /* unlink node from linked list */
	else
		new->next = NULL; /* change end of list */

	free(current); /* free memory of deleted node */

	return (1);
}
