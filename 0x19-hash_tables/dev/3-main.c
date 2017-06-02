#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int idx;

/* hetairas collides with mentioner*/

    ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	idx = key_index("betty", 1024);
	printf("new key: %s, new val: %s, next = %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);


	hash_table_set(ht, "hetairas", "holberton");
	idx = key_index("hetairas", 1024);
	printf("new key %s, new val: %s, next = %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);

	hash_table_set(ht, "betty", "jimmy crack corn");
	idx = key_index("betty", 1024);
	printf("new key %s, new val: %s, next = %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);

	hash_table_set(ht, "mentioner", "now this is interesting!");
	idx = key_index("mentioner", 1024);
	printf("new key %s, new val: %s, next: %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);

    return (EXIT_SUCCESS);
}
