#include "hash_tables.h"

/**
 * key_index - A key/value pair should be stored in array of a hash table.
 * @key: The actual key to get the index of.
 * @size: The actual size of the array in the hash table.
 * Return: The index of the key is returned.
 * Description: The djb2 algorithm is used.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
