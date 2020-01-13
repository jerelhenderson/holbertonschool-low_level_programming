#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * @size: size of array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int loc;

	new_table = NULL;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_table_t) * size);
	if (new_table == NULL)
		return (NULL);

	while (loc < size)
	{
		new_table->array[loc] = NULL;
		loc++;
	}
	new_table->size = size;
	return (new_table);
}
