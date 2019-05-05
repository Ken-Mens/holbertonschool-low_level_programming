#include "lists.h"
/**
 * add_dnodeint_end - function that adds node at end of list_t
 * @head: head of linked list
 * @n: str of list_t
 * Return: head of list_t.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Anode, *temp;

	Anode = malloc(sizeof(dlistint_t));
	if (Anode == NULL)
		return (NULL);
	Anode->n = n;
	Anode->next = NULL;
	if (*head == NULL)
		*head = Anode;
		Anode->next = NULL;
	temp = *head;
	while (temp->next)
	temp = temp->next;
	temp->next = Anode;
	Anode->next = NULL;
	return (Anode);
}
