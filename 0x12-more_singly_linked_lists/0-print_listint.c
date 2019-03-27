#include "lists.h"
/**
 * print_listint - function that prints all elements of listint_t
 * @h: head of singly linked list
 * Return: Counter.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
