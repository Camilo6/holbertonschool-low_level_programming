#include "hash_tables.h"

/**
 * hash_table_create - that creates a hash table.
 * @size: is the size of the array
 * Return: hash table
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
