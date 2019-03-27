#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 * @head: head of linked list.
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *foo;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		foo = *head;
		*head = foo->next;
		free(foo);
	}
}
