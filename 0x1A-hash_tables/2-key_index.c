#include "hash_tables.h"

/**
 * key_index - computes and returns the index of a key
 *
 * Description: the function implements the djb2 algorithm on @key
 * to generate a hash value. This value is computed with @size to
 * generate key index.
 *
 * @key: key
 * @size: size of the array of the hash table
 * Return: returns key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
