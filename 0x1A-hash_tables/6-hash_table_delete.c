#include "hash_tables.h"

/**
 * hash_table_delete - Responsible for Deleting the hash table.
 * @ht: Represents hash table's pointer.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_table_t *head = ht;
    hash_node_t *node, *tmp;
    unsigned long int e_m;

    for (e_m = 0; e_m < ht->size; e_m++)
    {
        if (ht->array[e_m] != NULL)
        {
            node = ht->array[e_m];
            while (node != NULL)
            {
                tmp = node->next;
                free(node->key);
                free(node->value);
                free(node);
                node = tmp;
            }
        }
    }
    free(head->array);
    free(head);
}
