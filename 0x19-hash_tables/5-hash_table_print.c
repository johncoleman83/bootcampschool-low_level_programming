#include "hash_tables.h"

/**
 * hash_table_print - prints key value pairs from hash table.
 *     format: {'key': 'value'}
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, size;
	int comma = 0, start = 1;

	if (ht && ht->array)
	{
		size = ht->size;
		i = 0;
		while (i < size)
		{
			node = (ht->array)[i];
			if (node)
			{
				if (comma)
					printf(", ");
				if (start)
				{
					putchar('{');
					start = 0, comma = 1;
				}
				while (node->next)
				{
					printf("'%s': '%s', ", node->key, node->value);
					node = node->next;
				}
				printf("'%s': '%s'", node->key, node->value);
			}
			i++;
		}
		if (!start)
			printf("}\n");
	}
}
