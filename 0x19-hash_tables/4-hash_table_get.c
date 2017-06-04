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
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	if (!ht->array || !(ht->array)[idx])
		return (NULL);

	node = (ht->array)[idx];

	while (strcmp(node->key, key))
		node = node->next;

	return (node ? node->value : NULL);
}
