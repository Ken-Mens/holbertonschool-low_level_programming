#include "lists.h"
/**
 * list_len - returns number of elements in a size_t
 * @h: stands for head of our linked list
 * Return: number of elements/nodes.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
