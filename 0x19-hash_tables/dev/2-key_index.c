#include "hash_tables.h"

/**
 * key_index - returns the index of the input key
 * @key: the string to be converted to hash
 * @size: the size of the hash table
 *
 * Return: the index of the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
