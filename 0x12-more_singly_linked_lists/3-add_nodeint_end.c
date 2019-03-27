#include "lists.h"
/**
 * add_nodeint_end - function that adds node at end of listint_t
 * @head: head of singly linked list.
 * @n: integer to be constant throughout.
 * Return: new node at end.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *foo;

	foo = malloc(sizeof(listint_t));
	if (foo == NULL)
		return (NULL);
	foo->n = n;
	if (*head == NULL)
	{
		*head = foo;
		foo->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = foo;
	foo->next = NULL;
	return (*head);
}
