#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t
 * @head: head node of linked list.
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = (*head);
	int foo;

	if (*head == NULL)
		{
		return (0);
		}
	*head = NULL;
	foo = temp->n;
	*head = temp->next;
	free(temp);
	return (foo);
}
