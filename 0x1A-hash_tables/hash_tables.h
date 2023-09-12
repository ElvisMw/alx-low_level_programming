#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structure to represent a node in the hash table */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/* Structure to represent a hash table */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Function prototypes for hash table operations */

/**
 * hash_table_create - Create a new hash table.
 * @size: The size of the new hash table.
 *
 * Return: A pointer to the newly created hash table or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - Compute the hash value for a given string using the DJB2 algorithm.
 * @str: The input string.
 *
 * Return: The computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - Compute the index of a key in a hash table.
 * @key: The key to find the index for.
 * @size: The size of the hash table.
 *
 * Return: The index where the key should be stored in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * hash_table_set - Add a key-value pair to a hash table.
 * @ht: The hash table to add the pair to.
 * @key: The key for the new pair.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - Retrieve the value associated with a given key in a hash table.
 * @ht: The hash table to search in.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * hash_table_print - Print the contents of a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht);

/**
 * hash_table_delete - Delete a hash table and its contents.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht);

/* Structures and function prototypes for sorted hash tables */

/* Structure to represent a node in a sorted hash table */
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

/* Structure to represent a sorted hash table */
typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

/* Function prototypes for sorted hash table operations */

/**
 * shash_table_create - Create a new sorted hash table.
 * @size: The size of the new sorted hash table.
 *
 * Return: A pointer to the newly created sorted hash table or NULL if an error occurs.
 */
shash_table_t *shash_table_create(unsigned long int size);

/**
 * shash_table_set - Add a key-value pair to a sorted hash table.
 * @ht: The sorted hash table to add the pair to.
 * @key: The key for the new pair.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_get - Retrieve the value associated with a given key in a sorted hash table.
 * @ht: The sorted hash table to search in.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key);

/**
 * shash_table_print - Print the contents of a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht);

/**
 * shash_table_print_rev - Print the contents of a sorted hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht);

/**
 * shash_table_delete - Delete a sorted hash table and its contents.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht);

#endif
