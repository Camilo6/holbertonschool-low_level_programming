#include "hash_tables.h"

/**
 * *hash_table_get - that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Description: return NULL if key couldn't be found
 * Return: the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *traverse;
	int i;

	/* return 0 if table, key or value is NULL */
	if (ht  == NULL || key == NULL)
		return (NULL); /* return NULL if key can't be found */

	/* use key_index to determine index of the value */
	index = key_index((const unsigned char *)key, ht->size);

	traverse = ht->array[index];

	if (traverse == NULL)
		return (NULL);

	/* handle collision instances */
	for (i = strcmp(key, traverse->key); traverse != NULL; )
	{
		if (i == 0)
			return (traverse->value);
		traverse = traverse->next;
	}

	return (NULL);
}
