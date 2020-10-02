#include "hash_tables.h"

/**
 * hash_table_create -
 *
 * Return:
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t *sze = NULL;

	table = malloc(sizeof(*table));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(sze) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}
	return (table);
}
