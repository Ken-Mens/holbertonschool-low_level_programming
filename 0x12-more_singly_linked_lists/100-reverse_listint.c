#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 * @head: head of list to reverse
 * Return: a pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *foo = NULL;
	listint_t *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = foo;
		foo = *head;
		*head = next;
	}
	*head = foo;
	return (*head);
}
