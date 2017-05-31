#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of hash table
 *
 * Return: pointer to hash table
 */hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *s;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(hash_table_t) * 1);
	if (!ht)
		return (NULL);

	s = calloc(size, sizeof(hash_node_t *));
	if (!s)
	{
		free(ht);
		return (NULL);
	}
	ht->array = &s;

	return (ht);
}
