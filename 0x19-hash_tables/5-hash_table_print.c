#include "hash_tables.h"

/**                                                                                                                                                                      * hash_table_print - print hash table                                                                                                                                   *                                                                                                                                                                       * @ht: hash table                                                                                                                                                       */
void hash_table_print(const hash_table_t *ht)
{
        hash_node_t *current;
        unsigned long int idx;
        unsigned long int count;

        current = NULL;
        idx = 0;
        count = 0;

        if (ht == NULL)
                return;

        current = ht->array[idx];

        printf("{");
        while (idx < ht->size)
        {
                while (current != NULL)
                {
                        printf(", ");
                        printf("'%s': '%s'", current->key, current->value);
                        current = current->next;
                        count++;
                }
                idx++;
                current = ht->array[idx];
        }
        printf("}\n");
}
