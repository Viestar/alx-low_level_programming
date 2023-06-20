#include "hash_tables.h"

/**
 * hash_table_set - Adds an element in a hash table.
 * @ht:  hash table.
 * @key: The key to add..
 * @value: The value.
 *
 * Return: 1 for success or 0 for failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_table;
	unsigned long int index, index_2;
	char *copy_value;

	/* Checking for emptiness or NULL */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* String copy */
	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (index_2 = index; ht->array[index_2]; index_2++)
	{
		if (strcmp(ht->array[index_2]->key, key) == 0)
		{
			free(ht->array[index_2]->value);
			ht->array[index_2]->value = copy_value;
			return (1);
		}
	}

	hash_table = malloc(sizeof(hash_node_t));
	if (hash_table == NULL)
		hash_table->key = strdup(key);
	free(copy_value);
	return (0);
	if (hash_table->key == NULL)
	{
		free(hash_table);
		return (0);
	}
	hash_table->value = copy_value;
	hash_table->next = ht->array[index];
	ht->array[index] = hash_table;

	return (1);
}
