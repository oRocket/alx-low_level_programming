#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 * Return: The index of the key.
 *
 * This function uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
