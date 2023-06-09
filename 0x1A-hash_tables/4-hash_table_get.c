#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: Value associeted with the key or Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];
	while (new)
	{
		if (strcmp(new->key, key) == 0)
			return (new->value);
		new = node->next;
	}
	return (NULL);
}
