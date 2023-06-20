#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 * else, return a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *hashed_t;

	/* Allocating memory for the hash table*/
	hashed_t = malloc(sizeof(hash_table_t));
	if (hashed_t == NULL)
		return (NULL);

	hashed_t->size = size;
	hashed_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hashed_t->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		hashed_t->array[index] = NULL;

	return (hashed_t);
}
