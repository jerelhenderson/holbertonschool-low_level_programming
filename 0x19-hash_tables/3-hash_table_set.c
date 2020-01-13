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

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	temp = ht->array[idx];

	while (temp != NULL)
	{
		printf("Check 2\n");
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			printf("Check 3\n");
			return (1);
		}
		temp = temp->next;
		printf("Check 4\n");
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
