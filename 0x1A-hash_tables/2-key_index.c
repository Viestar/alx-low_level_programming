#include "hash_tables.h"

/**
 * * key_index -returns the index at which the key should be placed.
 * @key: The key to get the index of.
 * @size: Array size
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
