#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	unsigned long int index;
	hash_node_t *tmp, *hash_node;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			hash_node = ht->array[index];
			while (hash_node != NULL)
			{
				tmp = hash_node->next;
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				hash_node = tmp;
			}
		}
		index++;
	}
	free(head->array);
	free(head);
}
