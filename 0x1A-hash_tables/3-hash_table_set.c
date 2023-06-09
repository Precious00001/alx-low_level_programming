#include "hash_tables.h"

/**
 * hash_table_set - creates a new hash node
 * @ht: hash table
 * @key: key for the node
 * @value: value associeted to the key to add
 * Return: the new node, or NULL on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *new, *temp;

	if (!key || !value || !ht)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	temp = ht->array[index];
	while (temp)
	{
		if (temp && strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
