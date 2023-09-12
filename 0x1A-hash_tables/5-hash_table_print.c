#include "hash_tables.h"

/**
 * hash_table_print - Print the contents of a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int e_m;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (e_m = 0; e_m < ht->size; e_m++)
	{
		if (ht->array[e_m] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[e_m];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
