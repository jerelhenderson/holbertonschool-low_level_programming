#include "hash_tables.h"

/**
 *
 *
 *
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

       	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (ht->array[index] != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return NULL;
}
