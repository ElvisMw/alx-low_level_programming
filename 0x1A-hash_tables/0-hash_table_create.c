#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int e_m;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
        return (NULL);
    for (e_m = 0; e_m < size; e_m++)
        ht->array[e_m] = NULL;

    return (ht);
}
