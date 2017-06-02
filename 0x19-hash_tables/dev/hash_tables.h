#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

/* ----- c std lib headers ----- */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

/* ----- macros ----- */

#define TRUE (1 == 1)
#define FALSE (!TRUE)
#define BUFSIZE 1024

/* ----- Structs ----- */
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* ----- Create Hash Table ----- */
hash_table_t *hash_table_create(unsigned long int size);

/* ----- Create Hash Key ----- */
unsigned long int hash_djb2(const unsigned char *str);

/* ----- returns index key ----- */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* ----- adds to hash table ----- */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* ----- gets value from key input ----- */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* ----- prints hash table key : value pairs ----- */
void hash_table_print(const hash_table_t *ht);

/* ----- deletes and cleans a hash table ----- */
void hash_table_delete(hash_table_t *ht);

#endif
