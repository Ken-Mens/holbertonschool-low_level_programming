#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newone;

	if (size == 0)
		return (NULL);

	newone = malloc(sizeof(hash_table_t));
	if (newone == NULL)
		return (NULL);
	newone->size = size;
	newone->array = malloc(sizeof(hash_node_t *) * size);
	return (newone);
}
