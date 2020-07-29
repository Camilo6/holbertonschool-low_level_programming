#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *current_node = NULL;

	for (current_node = *head; current_node && current_node->next != NULL; )
	{
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(listint_t)); /* allocate node */
	if (new_node == NULL) /* check new node if empty */
		return (NULL);
	new_node->n = n;   /*put new data into new node */
	new_node->next = NULL;  /*make next of new node end by pointing to NULL */

	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
