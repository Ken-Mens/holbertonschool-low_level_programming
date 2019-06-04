#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to hash table
 * @ht: hash table to add
 * @key: key
 * @value: value
 * Return: 1 on success otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;
	hash_node_t *tempo;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	new = ht->array[idx];

	while (tempo)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			free(tempo->value);
			tempo->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
