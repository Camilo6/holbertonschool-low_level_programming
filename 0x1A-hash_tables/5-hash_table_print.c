#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 *
 * Description: You should print the key/value in the order that they appear
 * in the array of hash table
 * Order: array, list
 * Format: see example
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *traverse;
	unsigned long i;
	int j;

	/* if table null, exit */
	if (ht == NULL)
		return;
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i])
		{
			traverse = ht->array[i];
			/* if array at index exits then enter another for loop */
			for (j = 0; traverse != NULL; traverse = traverse->next, j++)
			{
				/* traverse through linked list of index */
				if (j == 0)
					printf(" ");
				/* at each node of linked list, print key/values to stdout */
				printf("%s': '%s'", traverse->key, traverse->value);
			}
		}
	}

}
