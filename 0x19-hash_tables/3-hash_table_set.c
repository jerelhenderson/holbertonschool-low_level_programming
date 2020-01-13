#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 *
 * @ht: tash table to add key/value
 * @key: The Key
 * @value: value associated w/ key
 * Return: 1 if successful, 0 if unsuccessful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (value == NULL)
		return (0);

	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
		return (0);

	idx = key_index(((unsigned char *)key), ht->size);

	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
