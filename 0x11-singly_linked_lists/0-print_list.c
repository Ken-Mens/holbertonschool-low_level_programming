#include "lists.h"
/**
 * print_list - prints all elements of a size_t.
 * @h: stands for head of our linked list
 * Return: number of elements/nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	return ('\0');
	if (h->str == NULL)
	printf("[%d] %s\n", 0, "(nil)");
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
