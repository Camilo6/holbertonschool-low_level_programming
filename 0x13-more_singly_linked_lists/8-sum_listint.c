#include "lists.h"

/**
 * sum_listint - function that returns sum of all data (n) of a linked list
 * @head: pointer to head
 * Return: sum of all int; if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}
	return (sum);
}