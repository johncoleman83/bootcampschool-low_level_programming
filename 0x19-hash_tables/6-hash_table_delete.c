#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table, frees all memory
 * @ht: the hash table to free
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int size, i;

	if (ht && ht->array)
	{
		i = 0;
		size = ht->size;
		while (i < size)
		{
			node = (ht->array)[i];
			while (node)
			{
				temp = node->next;
				if (node->key)
					free(node->key);
				if (node->value)
					free(node->value);
				free(node);
				node = temp;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
