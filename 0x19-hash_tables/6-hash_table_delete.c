#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int idx;

	current = NULL;
	idx = 0;

	if (ht == NULL)
		return;

	while (idx < ht->size)
	{
		current = ht->array[idx];
		while (current)
		{
			free(current->key);
			free(current->value);
			free(current);

			current = current->next;
		}
	}
	free(ht->array);
	free(ht);
}
