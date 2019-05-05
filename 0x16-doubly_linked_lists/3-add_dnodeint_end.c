#include "lists.h"
/**
 * add_dnodeint_end - function that adds node at end of list_t
 * @head: head of linked list
 * @n: str of list_t
 * Return: head of list_t.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *anode, *temp;

	anode = malloc(sizeof(dlistint_t));
	if (anode == NULL)
		return (NULL);
	anode->n = n;
	if (!*head)
	{
		anode->prev = NULL;
		*head = anode;
	}
	else
	{
		temp = (*head);
		while (temp->next != NULL)
			temp = temp->next;
		anode->prev = temp;
		anode->next = NULL;
		temp->next = anode;
	}
	return (anode);
}
