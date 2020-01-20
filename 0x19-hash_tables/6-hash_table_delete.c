#include "hash_tables.h"

/**                                                                                                                                                                      * hash_table_delete - delete a hash table                                                                                                                               *                                                                                                                                                                       * @ht: hash table                                                                                                                                                       */
void hash_table_delete(hash_table_t *ht)
{
        hash_node_t *current;
        hash_node_t *next;
        unsigned long int idx;

        current = NULL;
        next = NULL;
        idx = 0;

        if (ht == NULL)
                return;

        current = ht->array[idx];

        while (idx < ht->size)
        {
                while (current)
                {
                        next = current;
                        current = current->next;
                        free(current->key);
                        free(current->value);

                        free(current);
                        current = next;
                }
                current = ht->array[idx++];
        }
        idx++;
        free(ht->array);
        free(ht);
}
