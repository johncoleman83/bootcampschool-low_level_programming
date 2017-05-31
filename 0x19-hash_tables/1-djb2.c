#include "hash_tables.h"

/**
 * hash_djb2 - hash key generator from dan bernstein (djb2)
 * @str: input string to create key
 *
 * Return: the u long int of the hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
