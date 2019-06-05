#include "hash_tables.h"
/**
 * hash_table_delete - function to delete hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned long int idx;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			while (ht->array[idx])
			{
				ptr = ht->array[idx];
				free(ptr->key);
				free(ptr->value);
				ht->array[idx] = ht->array[idx]->next;
				free(ptr);
			}
		}
	}
	free(ht->array);
	free(ht);
}
