#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
}
