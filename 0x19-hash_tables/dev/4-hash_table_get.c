#include "hash_tables.h"

/**
 * hash_table_get - retrieves a hash value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value requested
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	return ((ht->array[index])->value);
}
