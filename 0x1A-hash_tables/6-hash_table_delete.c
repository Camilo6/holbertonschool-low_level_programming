#include "hash_tables.h"

/**
 * hash_table_delete - write a function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	
	hash_node_t *head;
	hash_node_t *traverse;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head != NULL && head->next == NULL)
		{
			free(head->key);
			free(head->value);
			free(head);
		}
		else if (head != NULL && head->next != NULL)
		{
			while (head != NULL)
			{
				traverse = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = traverse;
			}
			free(head);
		}
	}
	free(ht->array);
	free(ht);
}
