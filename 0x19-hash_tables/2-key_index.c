#include "hash_tables.h"

/**
 * key_index - index of key
 *
 * @key: The Key
 * @size: size of array
 * Return: index where key/value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
