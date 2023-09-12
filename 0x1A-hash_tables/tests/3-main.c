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

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    return (EXIT_SUCCESS);
}
