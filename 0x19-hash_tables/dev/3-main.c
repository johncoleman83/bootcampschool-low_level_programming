#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for a software development program students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int idx;

/* hetairas collides with mentioner*/

    ht = hash_table_create(1024);
	hash_table_set(ht, "namesake", "bootcamp");
	idx = key_index("namesake", 1024);
	printf("new key: %s, new val: %s, next = %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);


	hash_table_set(ht, "hetairas", "bootcamp");
	idx = key_index("hetairas", 1024);
	printf("new key %s, new val: %s, next = %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);

	hash_table_set(ht, "namesake", "jimmy crack corn");
	idx = key_index("namesake", 1024);
	printf("new key %s, new val: %s, next = %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);

	hash_table_set(ht, "mentioner", "now this is interesting!");
	idx = key_index("mentioner", 1024);
	printf("new key %s, new val: %s, next: %p\n", (ht->array[idx])->key,
		   (ht->array[idx])->value, (void *)(ht->array[idx])->next);

    return (EXIT_SUCCESS);
}
