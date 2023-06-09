#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	int init = 0;

	if (!ht)
		return;
	printf("{");
	for (n = 0; n <= ht->size; n++)
	{
		if (ht->array[n])
		{
			while (ht->array[n])
			{
				if (init != 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[n]->key, ht->array[n]->value);
				init = 1;
				ht->array[n] = ht->array[n]->next;

			}
		}
	}
	printf("}\n");
}
