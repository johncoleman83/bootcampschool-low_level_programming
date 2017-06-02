#include "hash_tables.h"

/**
 * hash_table_set - check the code for Holberton School students.
 * @ht: the hash table to be added to
 * @key: the key you want to add to the hash table
 * @value: the value associated with the key
 *
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *temp, *new_node;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	node = temp = ht->array[idx];
	if (node)
	{
		while (temp)
		{
			if (!strcmp(temp->key, key))
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = node;
	ht->array[idx] = new_node;
	return (1);
}
