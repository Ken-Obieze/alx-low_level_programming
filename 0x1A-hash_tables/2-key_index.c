#include "hash_tables.h"

/**
 * key_index - function gives the index of key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
