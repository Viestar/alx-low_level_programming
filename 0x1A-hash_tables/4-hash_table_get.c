#include "hash_tables.h"

/**
 * hash_table_get - Fetches value of the passed key.
 * @ht: Pointer to the hash table.
 * @key: The key to get the value of.
 * Return: Value or NULL if key not found or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_shelf;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	/* Checking bounds */
	if (index >= ht->size)
		return (NULL);

	hash_shelf = ht->array[index];
	while (hash_shelf && (strcmp(hash_shelf->key, key) != 0))
		hash_shelf = hash_shelf->next;

	if (hash_shelf == NULL)
		return (NULL);
	else
		return (hash_shelf->value);
}
