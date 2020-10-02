#include "hash_tables.h"

/**
 * hash_table_set - that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	unsigned long size;
	hash_node_t *new = NULL;

	/* return 0 if table, key or value is NULL */
	if (ht  == NULL || key == NULL || value == NULL)
		return (0); /* return 0 on failure */

	/* use key_index and determine size of table */
	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	/* allocate space for new node */
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0); /* return 0 on failure */

	/* assign data for new node */
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
