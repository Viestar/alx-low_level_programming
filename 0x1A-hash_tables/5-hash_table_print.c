#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned char jointer = 400;
	unsigned long int index = 0;

	if (ht == NULL)
		return; /* Print nothing */

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (jointer == 100)
				printf(", ");

			hash_node = ht->array[index];
			while (hash_node != NULL)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				hash_node = hash_node->next;
				if (hash_node != NULL)
					printf(", ");
			}
			jointer = 100;
		}
		index++;
	}
	printf("}\n");
}
