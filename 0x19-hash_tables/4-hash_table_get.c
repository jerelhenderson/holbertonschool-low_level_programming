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
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return NULL;
	if (key == NULL)
		return NULL;

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
