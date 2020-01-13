#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int idx;
	unsigned long int itr;

	current = NULL;
	idx = 0;
	itr = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
		while (current != NULL)
		{
			if (itr == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			itr = 1;
			current = current->next;
		}
	printf("}\n");
}
