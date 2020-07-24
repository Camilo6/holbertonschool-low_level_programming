#include "lists.h"

/**
 * free_list - free all space malloc'ed for list_t linked list
 * @head: pointer to the head
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
