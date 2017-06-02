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
	unsigned long int idx;
	hash_node_t *node, *new_node;

	if (!ht || !key || !key || strlen(key) == 0)
		return (EXIT_FAILURE);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	if (node && !strcmp(node->key, key))
	{
		free(node->value);
		node->value = strdup(value);
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (EXIT_FAILURE);
		new_node->key = strdup(key);
		if (!new_node->key)
			return (EXIT_FAILURE);
		new_node->value = strdup(value);
		if (!new_node->value)
			return (EXIT_FAILURE);
		new_node->next = node;
		ht->array[idx] = new_node;
	}
	return (EXIT_SUCCESS);
}
