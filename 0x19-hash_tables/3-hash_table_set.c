#include "hash_tables.h"

/**
 * add_hash_node - adds hash node to hash table array.
 * @key: the key you want to add to the hash table
 * @value: the value associated with the key
 *
 * Return: new node or NULL on failure
 */
hash_node_t *add_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		free(new_node);
		return (NULL);
	}

	return (new_node);
}


/**
 * hash_table_set - check the code for a software development program students.
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

	if (!ht || !key || !value || !ht->array || strlen(key) == 0)
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

	new_node = add_hash_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = node;
	ht->array[idx] = new_node;

	return (1);
}
