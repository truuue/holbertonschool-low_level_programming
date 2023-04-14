#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long i = 0;

    while (i < ht->size)
    {
        hash_node_t *node = ht->array[i];

        while (node != NULL)
        {
            hash_node_t *temp = node;

            node = node->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
        i++;
    }
    free(ht->array);
    free(ht);
}

