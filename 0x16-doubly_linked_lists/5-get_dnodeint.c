#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns nth node of listint_t
 * @head: head of linked list.
 * @index: index to iterate through.
 * Return: Always 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *foo = head;

	while (counter < index && foo != NULL)
	{
		foo = foo->next;
		counter++;
	}
	if (head == NULL)
		return (NULL);
	return (foo);
}
