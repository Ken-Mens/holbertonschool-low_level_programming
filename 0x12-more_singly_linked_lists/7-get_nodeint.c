#include "lists.h"
/**
 * get_nodeint_at_index - function that returns nth node of listint_t
 * @head: head of linked list.
 * @index: index to iterate through.
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *foo = head;

	while (count < index && foo != NULL)
	{
		foo = foo->next;
		count++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (foo);
}
