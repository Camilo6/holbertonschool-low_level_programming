#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer
 * Return: returns the head node's data (n) if the linked
 * list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int count = 0;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	count = temp->n;
	*head = temp->next;
	free(temp);
	return (count);
}
