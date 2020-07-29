#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *space;

	if (head == NULL)
		return; /* check if list is empty */

	while (*head != NULL)
	{
		space = *head;
		*head = (*head)->next;
		free(space);
	}
}
