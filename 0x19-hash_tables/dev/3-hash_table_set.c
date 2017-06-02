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

	if (!ht || !key || strlen(key) == 0)
		return (EXIT_FAILURE);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
	{
		new_node = malloc(sizeof(hash_node_t *));
		if (!new_node)
			return (EXIT_FAILURE);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		ht->array[index] = new_node;
	}
	else
	{
		if (strncmp(node->key, key, strlen(key) == 0))
		{
			free(node->key);
			node->value = strdup(value);
		}
		else
		{
			new_node = malloc(sizeof(hash_node_t *));
			if (!new_node)
				return (EXIT_FAILURE);
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = node;
		}
	}
	return (EXIT_SUCCESS);
}
