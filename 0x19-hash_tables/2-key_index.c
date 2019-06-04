#include "hash_tables.h"
/**
 * key_index - function that gives you index of a key
 * @key: is the key
 * @size: size of the array
 * Return: index at which key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
