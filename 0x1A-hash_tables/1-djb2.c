#include "hash_tables.h"

/**
 * hash_djb2 - Hash function using the djb2 algorithm
 * @str: The input string to be hashed
 *
 * Return: The computed hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int e_m;

	hash = 5381;
	while ((e_m = *str++))
		hash = ((hash << 5) + hash) + e_m;

	return (hash);
}
