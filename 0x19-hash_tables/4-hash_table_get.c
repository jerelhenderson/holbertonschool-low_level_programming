#include "hash_tables.h"

/**
 * hash_table_get - retrieve value associated with key
 *
 * @ht: hash table
 * @key: The Key
 * Return: value of element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];

	while (ht->array[idx] != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
