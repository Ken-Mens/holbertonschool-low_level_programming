#include "lists.h"
/**
 * print_dlistint - prints all elements of a size_t.
 * @h: stands for head of our linked list
 * Return: number of elements/nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d \n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
