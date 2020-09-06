#include "lists.h"

/**
 * sum_dlistint - calculate sum of all data
 * @head: pointer to head of list
 * Return: returns the sum of all the data (n) of a dlistint_t linked list
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	current = head;
	if (head == NULL)
		return (0);

	for (sum = 0; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
