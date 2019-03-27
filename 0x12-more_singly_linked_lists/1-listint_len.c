#include "lists.h"
/**
 * listint_len - function that returns number of elements
 * @h: header of linked list
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
		return (counter);
}
