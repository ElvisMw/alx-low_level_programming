#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - Entry point of the program
 *
 * Return: EXIT_SUCCESS if the program runs successfully, otherwise exit status code
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);

    /* Add key-value pairs to the hash table */
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Jennie", "and Jay love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Holberton");
    hash_table_set(ht, "98", "Battery Streetz");

    /* Allocate and set key-value pair using strdup */
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);

    /* Free the allocated memory for key and value */
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);

    /* Modify an existing key-value pair */
    hash_table_set(ht, "98", "Battery Street");

    /* Add more key-value pairs */
    hash_table_set(ht, "hetairas", "Jennie");
    hash_table_set(ht, "hetairas", "Jennie Z");
    hash_table_set(ht, "mentioner", "Jennie");
    hash_table_set(ht, "hetairas", "Jennie Z Chu");

    /* Print the hash table */
    hash_table_print(ht);

    /* Delete the hash table and free memory */
    hash_table_delete(ht);

    return (EXIT_SUCCESS);
}
