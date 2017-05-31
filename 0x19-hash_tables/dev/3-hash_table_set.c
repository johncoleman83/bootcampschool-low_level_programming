#include "hash_tables.h"

/**
 * hash_table_set - check the code for Holberton School students.
 * @ht: the hash table to be added to
 * @key: the key you want to add to the hash table
 * @value: the value associated with the key
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index, i, size;

	if (!ht || !key)
		return (EXIT_FAILURE);

	size = ht->size;
	hash = hash_djb2(key);
	index = hash / size;

	while (i < size)
    return (EXIT_SUCCESS);
}
