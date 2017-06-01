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
	hash_node_t *node, *new_node;

	if (!ht || !key)
		return (EXIT_FAILURE);

	size = ht->size;
	hash = hash_djb2(key);

	index = hash % size;

	if (!ht->array[index])
	{
		node = malloc(sizeof(hash_node_t *));
		node->key = strdup(key);
		node->value = strdup(value);
		ht->array[index] = node;
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t *));
		if (!new_node)
			return (EXIT_FAILURE);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = node;
		ht->array[index] = new_node;
	}
	return (EXIT_SUCCESS);
}
