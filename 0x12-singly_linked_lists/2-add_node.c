#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: head of the list
 * @str: string for node
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodo = NULL;

	newnodo = malloc(sizeof(list_t));

	if (newnodo == NULL || head == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		newnodo->str = strdup(str);

		if (newnodo->str == NULL)
		{
			return (free(newnodo), NULL);
		}
		newnodo->len = _strlen(newnodo->str);
	}
	newnodo->next = *head;
	*head = newnodo;
	return (newnodo);
}
