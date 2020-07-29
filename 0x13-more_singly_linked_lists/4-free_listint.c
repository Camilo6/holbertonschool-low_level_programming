#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to head node
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
