#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: index at the key/value should stored in the array of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
